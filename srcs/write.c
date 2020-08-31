#include "../includes/ft_printf.h"

void	ft_putnbrmax_fd(intmax_t n, int fd, t_data *data)
{
	if (n == -9223372036854775807 - 1)
	{
        	write(1, "9223372036854775808", 19);
            data->len += 19;
    }
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
            data->len++;
			n *= -1;
		}
		if (n > 9)
			ft_putnbrmax_fd(n / 10, fd, data);
		ft_putchar_fd((n % 10) + '0', fd);
        data->len++;
	}
}

int print_scattered_chars(const char *format, t_data *data, int spec_idx, int *len)
{
int i;
i = spec_idx;

while (format[i] != '\0' && (format[i] == '-' || format[i] == '+' || format[i] == ' ' || format[i] == '0' || format[i] == '#' ||
        format[i] == '.' || format[i] == '*' || format[i] == 'l' || format[i] == 'h' ||
        format[i] == 'L' || format[i] == 'j' || format[i] == 'z' || (ft_isdigit(format[i]) == 1)))
            i++;
        *len = (*len + spec_idx - i);
                while (format[i] != '\0')
                {
                if (format[i] == '%')
                {
                if (data->undefined == 1 || (i == spec_idx && format[i - 1] == '%' && format[i + 1] == '%'))
                *len -= 1;
                break;
                }
                else
                {
                print_char(data, format[i]);
                i++;
                data->undefined = 1;
                }
                }
        return (i);
        }





void print_char(t_data *data, char c)
{
    if (c != '\0')
    {
        write(1, &c, 1);
        data->len++;
    }
}

void print_str(t_data *data, char *str)
{
    int i;
    int precision;

    precision = data->precision;
    i = 0;
    if (data->precision == -1)
    {
        ft_putstr(str);
        data->len += ft_strlen(str);
    }
    else
    {
    while (str[i] != '\0' && precision > 0)
    {
        write(1, &str[i], 1);
        data->len++;
        i++;
        precision--;
    }
    }
}

void print_padding(t_data *data, int space_pad, int zero_pad, int zerox_sign)
{
int c;

c = ' ';
if (data->flag_index[0] == 0)
 {           
     while (space_pad > 0)
   {
        if (data->flag_index[3] && data->precision == -1)
             c = '0';
         if (space_pad == 1 && data->int_neg == -1 && data->flag_index[1] == 1)
        c = '+';
        if (space_pad == 1 && data->int_neg == 1)
            c = '-';
         print_char(data, c);
          space_pad--;
   }
 }
 if (zerox_sign == 1)
       post_padding_addons_Xxpo(data);
       while (zero_pad > 0)
    {
        print_char(data, '0');
        zero_pad--;
    }
}