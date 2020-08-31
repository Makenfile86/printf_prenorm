#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include "stdarg.h"
# include <ctype.h>

typedef	struct		s_data
{
	va_list args[1];
    char conversion;
    const char *format;
    char *conversions;
    char *flags;
    int flag_index[5];
    int spaces;
    int precision;
    char *type;
    int len;
    int int_neg;
    int undefined;

}					t_data;

int		ft_printf(const char *format, ...);
//int search_conversions_str(t_data *data, const char *s1, char *s2, int max_index);
int parse_data(t_data *data);
void init(t_data *data);
void conversion_s(const char *format, t_data *data, int specifier_idx, int conv_idx);
void conversion_c(const char *format, t_data *data, int specifier_idx, int conv_idx);
void conversion_d(const char *format, t_data *data, int specifier_idx, int conv_idx);
int conversion_none(const char *format, t_data *data, int specifier_idx);
void conversion_u(const char *format, t_data *data, int specifier_idx, int conv_idx);
int match_conversion(const char *format, t_data *data, int specifier_idx, int conv_idx);
void conversion_p(const char *format, t_data *data, int specifier_idx, int conv_idx);
void conversion_oO(const char *format, t_data *data, int specifier_idx, int conv_idx);
void conversion_xX(const char *format, t_data *data, int specifier_idx, int conv_idx);
void conversion_f(const char *format, t_data *data, int specifier_idx, int conv_idx);
void conversion_lf(const char *format, t_data *data, int specifier_idx, int conv_idx);
void parse_flags(const char *format, t_data *data, int specifier_idx, int conv_idx);
int parse_width(const char *format, t_data *data, int curr_index, int conv_idx);
void padding_gate_sc(t_data *data, int flag_value, int len);
void padding_sc(t_data *data, int len, char c);
void re_init(t_data *data);
void parse_precision(const char *format, t_data *data, int specifier_idx, int conv_idx);
void print_str(t_data *data, char *str);
void print_char(t_data *data, char c);
int parse_data_types(const char *format, t_data *data, int specifier_idx, int conv_idx);
int count_int_len(intmax_t nbr);
void parse_arg_ptr(const char *format, t_data *data, int specifier_idx, int conv_idx);
void padding_preprint(t_data *data, int len);
void padding_postprint(t_data *data, int len);
int print_scattered_chars(const char *format, t_data *data, int specifier_idx, int *len);
void	ft_putnbrmax_fd(intmax_t n, int fd, t_data *data);
char		*ft_itoa_base(uintmax_t num, uintmax_t base, char c);
void others(t_data *data, int *len, int *zero_pad, int *space_pad);
void zero_noprec_right(t_data *data, int *len, int *zero_pad);
void precision_prevail(t_data *data, int *len, int *zero_pad, int *space_pad);
void len_prevail(t_data *data, int *space_pad);
void print_padding(t_data *data, int space_pad, int zero_pad, int zerox_sign);
void post_padding_addons_Xxpo(t_data *data);
void error_message();
char *round_up(char *res, int i);
char *round_down(char *res, t_data *data, int i);
char *no_precision_dbl(t_data *data, char *integ);
void free_strs(char *s1, char *s2, char *s3);
double		ft_double_power(double n, int pow);

#endif