#include "ft_printf.h"

static void edit_flags(t_flags *tab)
{
	if (tab->space && tab->plus)
		tab->space = 0;
}

char	check_flags(t_flags *tab, const char *str, char format)
{
	int i;

	i = -1;
	while (str[++i] != format)
	{
		/* Mayby need move to own while loop for norm */
		/* For datatype flags can use "find sub string func" */
		/* Seperate 1 char flags and 2 or more char flags to diff while loops */
		if (str[i] == 'h' && tab->h)
		{
			tab->h = 0;
			tab->hh = 1;
		}
		if (str[i] == 'h' && !tab->hh)
			tab->h = 1;
		if (str[i] == 'l' && tab->l)
		{
			tab->l = 0;
			tab->ll = 1;
		}
		if (str[i] == 'l' && !tab->ll)
			tab->l = 1;
		if (str[i] == '#')
			tab->hash = 1;
		if (str[i] == '0' && !tab->width && !tab->minus)
			tab->zero = 1;
		if (str[i] == '-')
			tab->minus = 1;
		if (str[i] == '+')
			tab->plus = 1;
		if (str[i] == '.')
			tab->precision = 1;
		if (str[i] == ' ')
			tab->space = 1;
		if (ft_isdigit(str[i]) && !tab->precision)
			tab->width = ((10 * tab->width) + str[i] - 48);
 		else if (ft_isdigit(str[i]))
			tab->prec_len = ((10 * tab->prec_len) + str[i] - 48);
	}
	edit_flags(tab);
	return (*str);
}