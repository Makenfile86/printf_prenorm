#include "../includes/ft_printf.h"

static char *save_decimals(int accu, double dbl)
{
    int i;
    char *res;
    double tmp;

    i = 0; 
    if (!(res = ft_strnew(19 + 1)))
		error_message();

        while (--accu >= 0)
	{
		tmp = dbl / ft_double_power(10.0, accu);
        if (accu == 0 && ((int)tmp + '0' == 5))
         {   
             accu++;
             dbl *= 10;
         }
        res[i++] = '0' + (int)tmp;
		dbl -= (double)((int)tmp * ft_double_power(10.0, accu));
	}
    return (res);

}

char *round_up(char *res, int i)
{
    int y;

    y = 2;
        res[i - 1] = '\0';
        if (res[i - 2] == '9')
        res[i - 2] = '0';
        else
        res[i - 2] += 1;
        while (res[i - y] == '0' && (i - y > 0))
        {
            if (res[i - y - 1] == '9')
        res[i - y - 1] = '0';
        else
        res[i - y - 1] += 1;
            i--;
        }
return (res);

}

char *round_down(char *res, t_data *data, int i)
{
 i = data->precision;
        while (res[i] != '\0')
        {
            res[i] = '\0';
            i++;
        }
        res[data->precision] = '\0';
        return (res);
}

static char	*deci_part(double dbl, int accu, t_data *data)
{
	char	*res;
	int		i;

  
	i = -1;
while (++i < accu)
		dbl *= 10;
   
	res = save_decimals(accu, dbl);
    if (data->precision == 0)
    {
        i = 0;
        if (res[i] >= (5 + '0'))
        data->undefined = 1;
        ft_bzero(res, ft_strlen(res));
        return (res);
    }    
    if (res[i - 1] >= (5 + '0'))
    res = round_up(res, i);
    else
    res = round_down(res, data, i);
   
    
	return (res);
}

static char	*integ_part(double *dbl)
{
	int		pow_max;
	int		i;
	double	tmp;
	char	*res;

	*dbl = (*dbl < 0 ? -*dbl : *dbl);
	tmp = *dbl;
	pow_max = 0;
	while (tmp > 10.0)
	{
		pow_max++;
		tmp /= 10;
	}
	if (!(res = ft_strnew(pow_max + 1)))
    error_message();
	
	i = 0;
	while (pow_max >= 0)
	{
		tmp = *dbl / ft_double_power(10, pow_max);
		res[i] = '0' + (int)tmp;
		*dbl -= (double)((int)tmp * ft_double_power(10, pow_max));
		pow_max--;
		i++;
	}
	return (res);
}

static void set_more_rules_f(t_data *data, int num_len)
{
    if (data->spaces <= num_len)
    data->spaces = 0;
data->precision = -1;
if (data->flag_index[1] == 1)
data->flag_index[2] = 0;
if (data->flag_index[0] == 1)
data->flag_index[3] = 0;
if (data->int_neg != 1 && data->flag_index[1] == 1 && (data->spaces == 0 || data->flag_index[0] == 1))
        {
                print_char(data, '+');
                data->spaces -= 1;
            
        }
         if (data->flag_index[2] == 1 && data->int_neg != 1)
        {
            print_char(data, ' ');
            data->spaces--;
            data->flag_index[2] = 0;
        }

}

static void set_rules_f(t_data *data, double *nbr)
{
if (*nbr < 0 && *nbr != -2147483648 && *nbr != (-9223372036854775807 - 1))
    {
    
        data->int_neg = 1;
        *nbr *= -1;
    }
    else
    data->int_neg = -1;
if (data->precision == -1)
data->precision = 6;
}

char *no_precision_dbl(t_data *data, char *integ)
 {
    char *str;
    int temp_int;
    temp_int = ft_atoi(integ);
    if (data->undefined == 1)
    temp_int += 1;
    str = ft_itoa(temp_int);
    if (data->flag_index[4] == 1)
        str = ft_strcat(str, ".");
        return (str);
 }

void conversion_f(const char *format, t_data *data, int specifier_idx, int conv_idx)
{
   double nbr;
    char *integ;
    char *deci;
    char *str;
    
parse_arg_ptr(format, data, specifier_idx, conv_idx);
    parse_precision(format, data, specifier_idx, conv_idx);
     parse_flags(format, data, specifier_idx, conv_idx);
     nbr = (double)(va_arg(data->args[0], double));
     set_rules_f(data, &nbr);
     integ = integ_part(&nbr);
   deci = deci_part(nbr, (data->precision + 1), data);
if (data->precision == 0)
  str = no_precision_dbl(data, integ);
   else
{
integ = ft_strcat(integ, ".");
str = ft_strjoin(integ, deci);
}
 set_more_rules_f(data, ft_strlen(str));
       padding_preprint(data, ft_strlen(str));
       ft_putstr(str);
    padding_postprint(data, ft_strlen(str));
        data->len += ft_strlen(str);
       free_strs(integ, deci, str);
}