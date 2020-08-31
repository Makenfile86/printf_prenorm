#include "../includes/ft_printf.h"
#include "stdio.h"

int		ft_printf(const char *format, ...)
{
    int result;
    t_data *data;
    
    data = NULL;
    if (!(data = (t_data *)malloc(sizeof(t_data))))
		return(-1);
        data->format = format;
    init(data);
    if (format)
    {
    va_start(data->args[0], format);
    result = parse_data(data);
    va_end(data->args[0]);
    }
    result = data->len;
    free(data->type);
    free(data);
    return (result);
}