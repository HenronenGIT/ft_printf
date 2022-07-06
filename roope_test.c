// #include "./includes/ft_printf.h"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
int	ft_printf(const char *str, ...);


void minust(void)
{
	int i = 7, j = -7, k = 0;




	printf("~%d~\n", PRINTER(


	printf("~%d~\n", PRINTER("%-8s|%1d|\t\t|%1d|\t|%1d|\n", "%1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%2d|\t\t|%2d|\t|%2d|\n", "%2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%4d|\t\t|%4d|\t|%4d|\n", "%4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 1d|\t\t|% 1d|\t|% 1d|\n", "% 1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 1.1d|\t\t|% 1.1d|\t|% 1.1d|\n", "% 1.1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 1.5d|\t|% 1.5d|\t|% 1.5d|\n", "% 1.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 2d|\t\t|% 2d|\t|% 2d|\n", "% 2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 4d|\t\t|% 4d|\t|% 4d|\n", "% 4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 4.5d|\t|% 4.5d|\t|% 4.5d|\n", "% 4.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 4.1d|\t\t|% 4.1d|\t|% 4.1d|\n", "% 4.1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 6.4d|\t|% 6.4d|\t|% 6.4d|\n", "% 6.4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 01.5d|\t|% 01.5d|\t|% 01.5d|\n", "% 01.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 01d|\t\t|% 01d|\t|% 01d|\n", "% 01d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 04d|\t\t|% 04d|\t|% 04d|\n", "% 04d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 02d|\t\t|% 02d|\t|% 02d|\n", "% 02d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 04.1d|\t\t|% 04.1d|\t|% 04.1d|\n", "% 04.1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 04.5d|\t|% 04.5d|\t|% 04.5d|\n", "% 04.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 05.3d|\t\t|% 05.3d|\t|% 05.3d|\n", "% 05.3d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%01d|\t\t|%01d|\t|%01d|\n", "%01d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%01.4d|\t\t|%01.4d|\t|%01.4d|\n", "%01.4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%02d|\t\t|%02d|\t|%02d|\n", "%02d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%04d|\t\t|%04d|\t|%04d|\n", "%04d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%04.6d|\t|%04.6d|\t|%04.6d|\n", "%04.6d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%06.4d|\t|%06.4d|\t|%06.4d|\n", "%06.4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 1d|\t\t|%- 1d|\t|%- 1d|\n", "%- 1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 1.1d|\t\t|%- 1.1d|\t|%- 1.1d|\n", "%- 1.1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 1.5d|\t|%- 1.5d|\t|%- 1.5d|\n", "%- 1.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 2d|\t\t|%- 2d|\t|%- 2d|\n", "%- 2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 4d|\t\t|%- 4d|\t|%- 4d|\n", "%- 4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 5.3d|\t\t|%- 5.3d|\t|%- 5.3d|\n", "%- 5.3d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 4.5d|\t|%- 4.5d|\t|%- 4.5d|\n", "%- 4.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 6.4d|\t|%- 6.4d|\t|%- 6.4d|\n", "%- 6.4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-1d|\t\t|%+-1d|\t|%+-1d|\n", "%+-1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-2d|\t\t|%+-2d|\t|%+-2d|\n", "%+-2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-3.2d|\t\t|%+-3.2d|\t|%+-3.2d|\n", "%+-3.2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-3.5d|\t|%+-3.5d|\t|%+-3.5d|\n", "%+-3.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-4d|\t\t|%+-4d|\t|%+-4d|\n", "%+-4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-4.0d|\t\t|%+-4.0d|\t|%+-4.0d|\n", "%+-4.0d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-4.2d|\t\t|%+-4.2d|\t|%+-4.2d|\n", "%+-4.2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-4.6d|\t|%+-4.6d|\t|%+-4.6d|\n", "%+-4.6d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-6.3d|\t|%+-6.3d|\t|%+-6.3d|\n", "%+-6.3d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%-1d|\t\t|%-1d|\t|%-1d|\n", "%-1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%-1.2d|\t\t|%-1.2d|\t|%-1.2d|\n", "%-1.2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%-1.6d|\t|%-1.6d|\t|%-1.6d|\n", "%-1.6d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%-2d|\t\t|%-2d|\t|%-2d|\n", "%-2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%-4d|\t\t|%-4d|\t|%-4d|\n", "%-4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%-4.2d|\t\t|%-4.2d|\t|%-4.2d|\n", "%-4.2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%-4.6d|\t|%-4.6d|\t|%-4.6d|\n", "%-4.6d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+04d|\t\t|%+04d|\t|%+04d|\n", "%+04d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+02d|\t\t|%+02d|\t|%+02d|\n", "%+02d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+2d|\t\t|%+2d|\t|%+2d|\n", "%+2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+4d|\t\t|%+4d|\t|%+4d|\n", "%+4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+4.0d|\t\t|%+4.0d|\t|%+4.0d|\n", "%+4.0d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+3.6d|\t|%+3.6d|\t|%+3.6d|\n", "%+3.6d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+6.3d|\t|%+6.3d|\t|%+6.3d|\n", "%+6.3d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%1.1d|\t\t|%1.1d|\t|%1.1d|\n", "%1.1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%1.5d|\t\t|%1.5d|\t|%1.5d|\n", "%1.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%4.2d|\t\t|%4.2d|\t|%4.2d|\n", "%4.2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%4.0d|\t\t|%4.0d|\t|%4.0d|\n", "%4.0d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%4.5d|\t\t|%4.5d|\t|%4.5d|\n", "%4.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%5.4d|\t\t|%5.4d|\t|%5.4d|\n", "%5.4d", i, j, k); fflush(stdout);

	int i = 7, j = -7, k = 0;

	printf("\n%-8s|%.0d|\t\t|%.0d|\t|%.0d|\n", "%.0d", i, j, k);
	printf("%-8s|%.1d|\t\t|%.1d|\t|%.1d|\n", "%.1d", i, j, k);
	printf("%-8s|%.5d|\t\t|%.5d|\t|%.5d|\n", "%.5d", i, j, k);
	printf("%-8s|%0.5d|\t\t|%0.5d|\t|%0.5d|\n", "%0.5d", i, j, k);
	printf("%-8s|%3.0d|\t\t|%3.0d|\t|%3.0d|\n", "%3.0d", i, j, k);
	printf("%-8s|%2.5d|\t\t|%2.5d|\t|%2.5d|\n", "%2.5d", i, j, k);
	printf("%-8s|%6.3d|\t|%6.3d|\t|%6.3d|\n", "%6.3d", i, j, k);
	printf("%-8s|% .0d|\t\t|% .0d|\t|% .0d|\n", "% .0d", i, j, k);
	printf("%-8s|% .1d|\t\t|% .1d|\t|% .1d|\n", "% .1d", i, j, k);
	printf("%-8s|% .5d|\t|% .5d|\t|% .5d|\n", "% .5d", i, j, k);
	printf("%-8s|% 3.5d|\t|% 3.5d|\t|% 3.5d|\n", "% 3.5d", i, j, k);
	printf("%-8s|% 5.3d|\t\t|% 5.3d|\t|% 5.3d|\n", "% 5.3d", i, j, k);
	printf("%-8s|% 0.0d|\t\t|% 0.0d|\t|% 0.0d|\n", "% 0.0d", i, j, k);
	printf("%-8s|% 0.3d|\t\t|% 0.3d|\t|% 0.3d|\n", "% 0.3d", i, j, k);
	printf("%-8s|% 03.5d|\t|% 03.5d|\t|% 03.5d|\n", "% 03.5d", i, j, k);
	printf("%-8s|% 05.3d|\t\t|% 05.3d|\t|% 05.3d|\n", "% 05.3d", i, j, k);
	printf("%-8s|%-.0d|\t\t|%-.0d|\t|%-.0d|\n", "%-.0d", i, j, k);
	printf("%-8s|%-4.0d|\t\t|%-4.0d|\t|%-4.0d|\n", "%-4.0d", i, j, k);
	printf("%-8s|%-.5d|\t\t|%-.5d|\t|%-.5d|\n", "%-.5d", i, j, k);
	printf("%-8s|%-3.5d|\t\t|%-3.5d|\t|%-3.5d|\n", "%-3.5d", i, j, k);
	printf("%-8s|%-5.3d|\t\t|%-5.3d|\t|%-5.3d|\n", "%-5.3d", i, j, k);
	printf("%-8s|%- .0d|\t\t|%- .0d|\t|%- .0d|\n", "%- .0d", i, j, k);
	printf("%-8s|%- .5d|\t|%- .5d|\t|%- .5d|\n", "%- .5d", i, j, k);
	printf("%-8s|%- 3.5d|\t|%- 3.5d|\t|%- 3.5d|\n", "%- 3.5d", i, j, k);
	printf("%-8s|%- 5.3d|\t\t|%- 5.3d|\t|%- 5.3d|\n", "%- 5.3d", i, j, k);
	printf("%-8s|%-+.0d|\t\t|%-+.0d|\t|%-+.0d|\n", "%-+.0d", i, j, k);
	printf("%-8s|%-+.5d|\t|%-+.5d|\t|%-+.5d|\n", "%-+.5d", i, j, k);
	printf("%-8s|%-+3.5d|\t|%-+3.5d|\t|%-+3.5d|\n", "%-+3.5d", i, j, k);
	printf("%-8s|%-+5.3d|\t\t|%-+5.3d|\t|%-+5.3d|\n", "%-+5.3d", i, j, k);
	printf("%-8s|%+.0d|\t\t|%+.0d|\t|%+.0d|\n", "%+.0d", i, j, k);
	printf("%-8s|%+4.0d|\t\t|%+4.0d|\t|%+4.0d|\n", "%+4.0d", i, j, k);
	printf("%-8s|%+.3d|\t\t|%+.3d|\t|%+.3d|\n", "%+.3d", i, j, k);
	printf("%-8s|%+3.5d|\t|%+3.5d|\t|%+3.5d|\n", "%+3.5d", i, j, k);
	printf("%-8s|%+5.3d|\t\t|%+5.3d|\t|%+5.3d|\n", "%+5.3d", i, j, k);
}

void	spacet(void)
{
	int i = 7, j = -7, k = 0;


}

void	widt(void)
{
		int i = 7, j = -7, k = 0;

	printf("\n%-8s|%1d|\t\t|%1d|\t|%1d|\n", "%1d", i, j, k);
	printf("%-8s|%2d|\t\t|%2d|\t|%2d|\n", "%2d", i, j, k);
	printf("%-8s|%4d|\t\t|%4d|\t|%4d|\n", "%4d", i, j, k);
	printf("%-8s|% 1d|\t\t|% 1d|\t|% 1d|\n", "% 1d", i, j, k);
	printf("%-8s|% 1.1d|\t\t|% 1.1d|\t|% 1.1d|\n", "% 1.1d", i, j, k);
	printf("%-8s|% 1.5d|\t|% 1.5d|\t|% 1.5d|\n", "% 1.5d", i, j, k);
	printf("%-8s|% 2d|\t\t|% 2d|\t|% 2d|\n", "% 2d", i, j, k);
	printf("%-8s|% 4d|\t\t|% 4d|\t|% 4d|\n", "% 4d", i, j, k);
	printf("%-8s|% 4.5d|\t|% 4.5d|\t|% 4.5d|\n", "% 4.5d", i, j, k);
	printf("%-8s|% 4.1d|\t\t|% 4.1d|\t|% 4.1d|\n", "% 4.1d", i, j, k);
	printf("%-8s|% 6.4d|\t|% 6.4d|\t|% 6.4d|\n", "% 6.4d", i, j, k);
	printf("%-8s|% 01.5d|\t|% 01.5d|\t|% 01.5d|\n", "% 01.5d", i, j, k);
	printf("%-8s|% 01d|\t\t|% 01d|\t|% 01d|\n", "% 01d", i, j, k);
	printf("%-8s|% 04d|\t\t|% 04d|\t|% 04d|\n", "% 04d", i, j, k);
	printf("%-8s|% 02d|\t\t|% 02d|\t|% 02d|\n", "% 02d", i, j, k);
	printf("%-8s|% 04.1d|\t\t|% 04.1d|\t|% 04.1d|\n", "% 04.1d", i, j, k);
	printf("%-8s|% 04.5d|\t|% 04.5d|\t|% 04.5d|\n", "% 04.5d", i, j, k);
	printf("%-8s|% 05.3d|\t\t|% 05.3d|\t|% 05.3d|\n", "% 05.3d", i, j, k);
	printf("%-8s|%01d|\t\t|%01d|\t|%01d|\n", "%01d", i, j, k);
	printf("%-8s|%01.4d|\t\t|%01.4d|\t|%01.4d|\n", "%01.4d", i, j, k);
	printf("%-8s|%02d|\t\t|%02d|\t|%02d|\n", "%02d", i, j, k);
	printf("%-8s|%04d|\t\t|%04d|\t|%04d|\n", "%04d", i, j, k);
	printf("%-8s|%04.6d|\t|%04.6d|\t|%04.6d|\n", "%04.6d", i, j, k);
	printf("%-8s|%06.4d|\t|%06.4d|\t|%06.4d|\n", "%06.4d", i, j, k);
	printf("%-8s|%- 1d|\t\t|%- 1d|\t|%- 1d|\n", "%- 1d", i, j, k);
	printf("%-8s|%- 1.1d|\t\t|%- 1.1d|\t|%- 1.1d|\n", "%- 1.1d", i, j, k);
	printf("%-8s|%- 1.5d|\t|%- 1.5d|\t|%- 1.5d|\n", "%- 1.5d", i, j, k);
	printf("%-8s|%- 2d|\t\t|%- 2d|\t|%- 2d|\n", "%- 2d", i, j, k);
	printf("%-8s|%- 4d|\t\t|%- 4d|\t|%- 4d|\n", "%- 4d", i, j, k);
	printf("%-8s|%- 5.3d|\t\t|%- 5.3d|\t|%- 5.3d|\n", "%- 5.3d", i, j, k);
	printf("%-8s|%- 4.5d|\t|%- 4.5d|\t|%- 4.5d|\n", "%- 4.5d", i, j, k);
	printf("%-8s|%- 6.4d|\t|%- 6.4d|\t|%- 6.4d|\n", "%- 6.4d", i, j, k);
	printf("%-8s|%+-1d|\t\t|%+-1d|\t|%+-1d|\n", "%+-1d", i, j, k);
	printf("%-8s|%+-2d|\t\t|%+-2d|\t|%+-2d|\n", "%+-2d", i, j, k);
	printf("%-8s|%+-3.2d|\t\t|%+-3.2d|\t|%+-3.2d|\n", "%+-3.2d", i, j, k);
	printf("%-8s|%+-3.5d|\t|%+-3.5d|\t|%+-3.5d|\n", "%+-3.5d", i, j, k);
	printf("%-8s|%+-4d|\t\t|%+-4d|\t|%+-4d|\n", "%+-4d", i, j, k);
	printf("%-8s|%+-4.0d|\t\t|%+-4.0d|\t|%+-4.0d|\n", "%+-4.0d", i, j, k);
	printf("%-8s|%+-4.2d|\t\t|%+-4.2d|\t|%+-4.2d|\n", "%+-4.2d", i, j, k);
	printf("%-8s|%+-4.6d|\t|%+-4.6d|\t|%+-4.6d|\n", "%+-4.6d", i, j, k);
	printf("%-8s|%+-6.3d|\t|%+-6.3d|\t|%+-6.3d|\n", "%+-6.3d", i, j, k);
	printf("%-8s|%-1d|\t\t|%-1d|\t|%-1d|\n", "%-1d", i, j, k);
	printf("%-8s|%-1.2d|\t\t|%-1.2d|\t|%-1.2d|\n", "%-1.2d", i, j, k);
	printf("%-8s|%-1.6d|\t|%-1.6d|\t|%-1.6d|\n", "%-1.6d", i, j, k);
	printf("%-8s|%-2d|\t\t|%-2d|\t|%-2d|\n", "%-2d", i, j, k);
	printf("%-8s|%-4d|\t\t|%-4d|\t|%-4d|\n", "%-4d", i, j, k);
	printf("%-8s|%-4.2d|\t\t|%-4.2d|\t|%-4.2d|\n", "%-4.2d", i, j, k);
	printf("%-8s|%-4.6d|\t|%-4.6d|\t|%-4.6d|\n", "%-4.6d", i, j, k);
	printf("%-8s|%+04d|\t\t|%+04d|\t|%+04d|\n", "%+04d", i, j, k);
	printf("%-8s|%+02d|\t\t|%+02d|\t|%+02d|\n", "%+02d", i, j, k);
	printf("%-8s|%+2d|\t\t|%+2d|\t|%+2d|\n", "%+2d", i, j, k);
	printf("%-8s|%+4d|\t\t|%+4d|\t|%+4d|\n", "%+4d", i, j, k);
	printf("%-8s|%+4.0d|\t\t|%+4.0d|\t|%+4.0d|\n", "%+4.0d", i, j, k);
	printf("%-8s|%+3.6d|\t|%+3.6d|\t|%+3.6d|\n", "%+3.6d", i, j, k);
	printf("%-8s|%+6.3d|\t|%+6.3d|\t|%+6.3d|\n", "%+6.3d", i, j, k);
	printf("%-8s|%1.1d|\t\t|%1.1d|\t|%1.1d|\n", "%1.1d", i, j, k);
	printf("%-8s|%1.5d|\t\t|%1.5d|\t|%1.5d|\n", "%1.5d", i, j, k);
	printf("%-8s|%4.2d|\t\t|%4.2d|\t|%4.2d|\n", "%4.2d", i, j, k);
	printf("%-8s|%4.0d|\t\t|%4.0d|\t|%4.0d|\n", "%4.0d", i, j, k);
	printf("%-8s|%4.5d|\t\t|%4.5d|\t|%4.5d|\n", "%4.5d", i, j, k);
	printf("%-8s|%5.4d|\t\t|%5.4d|\t|%5.4d|\n", "%5.4d", i, j, k);
}

void	prect(void)
{
		int i = 7, j = -7, k = 0;

	printf("\n%-8s|%.0d|\t\t|%.0d|\t|%.0d|\n", "%.0d", i, j, k);
	printf("%-8s|%.1d|\t\t|%.1d|\t|%.1d|\n", "%.1d", i, j, k);
	printf("%-8s|%.5d|\t\t|%.5d|\t|%.5d|\n", "%.5d", i, j, k);
	printf("%-8s|%0.5d|\t\t|%0.5d|\t|%0.5d|\n", "%0.5d", i, j, k);
	printf("%-8s|%3.0d|\t\t|%3.0d|\t|%3.0d|\n", "%3.0d", i, j, k);
	printf("%-8s|%2.5d|\t\t|%2.5d|\t|%2.5d|\n", "%2.5d", i, j, k);
	printf("%-8s|%6.3d|\t|%6.3d|\t|%6.3d|\n", "%6.3d", i, j, k);
	printf("%-8s|% .0d|\t\t|% .0d|\t|% .0d|\n", "% .0d", i, j, k);
	printf("%-8s|% .1d|\t\t|% .1d|\t|% .1d|\n", "% .1d", i, j, k);
	printf("%-8s|% .5d|\t|% .5d|\t|% .5d|\n", "% .5d", i, j, k);
	printf("%-8s|% 3.5d|\t|% 3.5d|\t|% 3.5d|\n", "% 3.5d", i, j, k);
	printf("%-8s|% 5.3d|\t\t|% 5.3d|\t|% 5.3d|\n", "% 5.3d", i, j, k);
	printf("%-8s|% 0.0d|\t\t|% 0.0d|\t|% 0.0d|\n", "% 0.0d", i, j, k);
	printf("%-8s|% 0.3d|\t\t|% 0.3d|\t|% 0.3d|\n", "% 0.3d", i, j, k);
	printf("%-8s|% 03.5d|\t|% 03.5d|\t|% 03.5d|\n", "% 03.5d", i, j, k);
	printf("%-8s|% 05.3d|\t\t|% 05.3d|\t|% 05.3d|\n", "% 05.3d", i, j, k);
	printf("%-8s|%-.0d|\t\t|%-.0d|\t|%-.0d|\n", "%-.0d", i, j, k);
	printf("%-8s|%-4.0d|\t\t|%-4.0d|\t|%-4.0d|\n", "%-4.0d", i, j, k);
	printf("%-8s|%-.5d|\t\t|%-.5d|\t|%-.5d|\n", "%-.5d", i, j, k);
	printf("%-8s|%-3.5d|\t\t|%-3.5d|\t|%-3.5d|\n", "%-3.5d", i, j, k);
	printf("%-8s|%-5.3d|\t\t|%-5.3d|\t|%-5.3d|\n", "%-5.3d", i, j, k);
	printf("%-8s|%- .0d|\t\t|%- .0d|\t|%- .0d|\n", "%- .0d", i, j, k);
	printf("%-8s|%- .5d|\t|%- .5d|\t|%- .5d|\n", "%- .5d", i, j, k);
	printf("%-8s|%- 3.5d|\t|%- 3.5d|\t|%- 3.5d|\n", "%- 3.5d", i, j, k);
	printf("%-8s|%- 5.3d|\t\t|%- 5.3d|\t|%- 5.3d|\n", "%- 5.3d", i, j, k);
	printf("%-8s|%-+.0d|\t\t|%-+.0d|\t|%-+.0d|\n", "%-+.0d", i, j, k);
	printf("%-8s|%-+.5d|\t|%-+.5d|\t|%-+.5d|\n", "%-+.5d", i, j, k);
	printf("%-8s|%-+3.5d|\t|%-+3.5d|\t|%-+3.5d|\n", "%-+3.5d", i, j, k);
	printf("%-8s|%-+5.3d|\t\t|%-+5.3d|\t|%-+5.3d|\n", "%-+5.3d", i, j, k);
	printf("%-8s|%+.0d|\t\t|%+.0d|\t|%+.0d|\n", "%+.0d", i, j, k);
	printf("%-8s|%+4.0d|\t\t|%+4.0d|\t|%+4.0d|\n", "%+4.0d", i, j, k);
	printf("%-8s|%+.3d|\t\t|%+.3d|\t|%+.3d|\n", "%+.3d", i, j, k);
	printf("%-8s|%+3.5d|\t|%+3.5d|\t|%+3.5d|\n", "%+3.5d", i, j, k);
	printf("%-8s|%+5.3d|\t\t|%+5.3d|\t|%+5.3d|\n", "%+5.3d", i, j, k);
}

void	zerot(void)
{
		int i = 7, j = -7, k = 0;

	printf("\n%-8s|%0d|\t\t|%0d|\t|%0d|\n", "%0d", i, j, k);
	printf("%-8s|%04d|\t\t|%04d|\t|%04d|\n", "%04d", i, j, k);
	printf("%-8s|%03.5d|\t\t|%03.5d|\t|%03.5d|\n", "%03.5d", i, j, k);
	printf("%-8s|%04.0d|\t\t|%04.0d|\t|%04.0d|\n", "%04.0d", i, j, k);
	printf("%-8s|%04.2d|\t\t|%04.2d|\t|%04.2d|\n", "%04.2d", i, j, k);
	printf("%-8s|%04.3d|\t\t|%04.3d|\t|%04.3d|\n", "%04.3d", i, j, k);
	printf("%-8s|%+0d|\t\t|%+0d|\t|%+0d|\n", "%+0d", i, j, k);
	printf("%-8s|%+04d|\t\t|%+04d|\t|%+04d|\n", "%+04d", i, j, k);
	printf("%-8s|%+0.0d|\t\t|%+0.0d|\t|%+0.0d|\n", "%+0.0d", i, j, k);
	printf("%-8s|%+0.3d|\t\t|%+0.3d|\t|%+0.3d|\n", "%+0.3d", i, j, k);
	printf("%-8s|%+03.5d|\t|%+03.5d|\t|%+03.5d|\n", "%+03.5d", i, j, k);
	printf("%-8s|%+05.3d|\t\t|%+05.3d|\t|%+05.3d|\n", "%+05.3d", i, j, k);
	printf("%-8s|%0 d|\t\t|%0 d|\t|%0 d|\n", "%0 d", i, j, k);
	printf("%-8s|%0 4d|\t\t|%0 4d|\t|%0 4d|\n", "%0 4d", i, j, k);
	printf("%-8s|%0 .0d|\t\t|%0 .0d|\t|%0 .0d|\n", "%0 .0d", i, j, k);
	printf("%-8s|%0 .5d|\t|%0 .5d|\t|%0 .5d|\n", "%0 .5d", i, j, k);
	printf("%-8s|%0 3.5d|\t|%0 3.5d|\t|%0 3.5d|\n", "%0 3.5d", i, j, k);
	printf("%-8s|%0 5.3d|\t\t|%0 5.3d|\t|%0 5.3d|\n", "%0 5.3d", i, j, k);
}

void	test_d(void)
{
	printf("%-8s|%d|\t|%d|\t|%d|\n", "%d", 7, -7, 0);
	spacet();
	widt();
	plust();
	prect();
	zerot();
	minust();
	printf("\n");
}

void	percent(void)
{
	printf("%-8s|%%|\n", "%%");
	printf("%-8s|% %|\n", "% %");
	printf("%-8s|%-4%|\n", "%-4%");
	printf("%-8s|%- 4%|\n", "%- 4%");
	printf("%-8s|%-2%|\n", "%-2%");
	printf("%-8s|%- 2%|\n", "%- 2%");
	printf("%-8s|%-1%|\n", "%-1%");
	printf("%-8s|%4%|\n", "%4%");
	printf("%-8s|% 4%|\n", "% 4%");
	printf("%-8s|%3%|\n", "%3%");
	printf("%-8s|% 3%|\n", "% 3%");
	printf("%-8s|%2%|\n", "%2%");
	printf("%-8s|% 2%|\n", "% 2%");
	printf("%-8s|%1%|\n", "%1%");
	printf("%-8s|% 1%|\n", "% 1%");
	printf("%-8s|%0%|\n", "%0%");
	printf("%-8s|% 0%|\n", "% 0%");
	printf("%-8s|%-%|\n", "%-%");
	printf("%-8s|%+%|\n", "%+%");
	printf("%-8s|%+ 4%|\n", "%+ 4%");
	printf("%-8s|%+4%|\n", "%+4%");
	printf("%-8s|%04%|\n", "%04%");
	printf("%-8s|% 04%|\n", "% 04%");
	printf("%-8s|%-04%|\n", "%-04%");
	printf("%-8s|%.4%|\n", "%.4%");
	printf("%-8s|%4.2%|\n", "%4.2%");
	printf("%-8s|%-4.2%|\n", "%-4.2%");
	printf("%-8s|%3.5%|\n", "%3.5%");
	printf("%-8s|%03.5%|\n", "%03.5%");
	printf("%-8s|%#4%|\n", "%#4%");
	printf("%-8s|%#-4%|\n", "%#-4%");
}

void	chart(void)
{
	int a = 65, b = -65, c = 0;

	printf("%-8s|%c|\t|%c|\t|%c|\n", "%c", a, b, c);
	printf("%-8s|%3c|\t|%3c|\t|%3c|\n", "%3c", a, b, c);
	printf("%-8s|%-c|\t|%-c|\t|%-c|\n", "%-c", a, b, c);
	printf("%-8s|%-3c|\t|%-3c|\t|%-3c|\n", "%-3c", a, b, c);
	printf("%-8s|%*c|\t|%*c|\t|%*c|\n", "%*c", 3, a, 3, b, 3, c);
	printf("%-8s|%*c|\t|%*c|\t|%*c|\n", "%*c", -3, a, -3, b, -3, c);
}

void	unsigt(void)
{
	printf("%-8s|%u|\t\t|%u|\t\t|%u|\t|%u|\n", "%", 0, 17, 424242, -1000);
	printf("%-8s|%0u|\t\t|%0u|\t\t|%0u|\t|%0u|\n", "%0", 0, 17, 424242, -1000);
	printf("%-8s|%05u|\t\t|%05u|\t\t|%05u|\t|%05u|\n", "%05", 0, 17, 424242, -1000);
	printf("%-8s|%03.5u|\t\t|%03.5u|\t\t|%03.5u|\t|%03.5u|\n", "%03.5", 0, 17, 424242, -1000);
	printf("%-8s|%05.3u|\t\t|%05.3u|\t\t|%05.3u|\t|%05.3u|\n", "%05.3", 0, 17, 424242, -1000);
	printf("%-8s|%5u|\t\t|%5u|\t\t|%5u|\t|%5u|\n", "%5", 0, 17, 424242, -1000);
	printf("%-8s|%5.0u|\t\t|%5.0u|\t\t|%5.0u|\t|%5.0u|\n", "%5.0", 0, 17, 424242, -1000);
	printf("%-8s|%5.3u|\t\t|%5.3u|\t\t|%5.3u|\t|%5.3u|\n", "%5.3", 0, 17, 424242, -1000);
	printf("%-8s|%2.5u|\t\t|%2.5u|\t\t|%2.5u|\t|%2.5u|\n", "%2.5", 0, 17, 424242, -1000);
	printf("%-8s|%.5u|\t\t|%.5u|\t\t|%.5u|\t|%.5u|\n", "%.5", 0, 17, 424242, -1000);
	printf("%-8s|%-u|\t\t|%-u|\t\t|%-u|\t|%-u|\n", "%-", 0, 17, 424242, -1000);
	printf("%-8s|%-5u|\t\t|%-5u|\t\t|%-5u|\t|%-5u|\n", "%-5", 0, 17, 424242, -1000);
	printf("%-8s|%-5.0u|\t\t|%-5.0u|\t\t|%-5.0u|\t|%-5.0u|\n", "%-5.0", 0, 17, 424242, -1000);
	printf("%-8s|%-5.3u|\t\t|%-5.3u|\t\t|%-5.3u|\t|%-5.3u|\n", "%-5.3", 0, 17, 424242, -1000);
	printf("%-8s|%-2.5u|\t\t|%-2.5u|\t\t|%-2.5u|\t|%-2.5u|\n", "%-2.5", 0, 17, 424242, -1000);
	printf("%-8s|%-.5u|\t\t|%-.5u|\t\t|%-.5u|\t|%-.5u|\n", "%-.5", 0, 17, 424242, -1000);

}

void	hext(void)
{
	int a = 0, b = -4242, c = 1096382, d = 17;
	printf("\n%-8s|%x|\t\t|%x|\t\t|%x|\t|%x|\n", "%", a, d, b, c);
	printf("%-8s|%#x|\t\t|%#x|\t\t|%#x|\t|%#x|\n", "%#", a, d, b, c);
	printf("%-8s|%1x|\t\t|%1x|\t\t|%1x|\t|%1x|\n", "%1", a, d, b, c);
	printf("%-8s|%2x|\t\t|%2x|\t\t|%2x|\t|%2x|\n", "%2", a, d, b, c);
	printf("%-8s|%2.2x|\t\t|%2.2x|\t\t|%2.2x|\t|%2.2x|\n", "%2.2", a, d, b, c);
	printf("%-8s|%.0x|\t\t|%.0x|\t\t|%.0x|\t|%.0x|\n", "%.0", a, d, b, c);
	printf("%-8s|%#.0x|\t\t|%#.0x|\t\t|%#.0x|\t|%#.0x|\n", "%#.0", a, d, b, c);
	printf("%-8s|%4.0x|\t\t|%4.0x|\t\t|%4.0x|\t|%4.0x|\n", "%4.0", a, d, b, c);
	printf("%-8s|%04.0x|\t\t|%04.0x|\t\t|%04.0x|\t|%04.0x|\n", "%04.0", a, d, b, c);
	printf("%-8s|%#04.0x|\t\t|%#04.0x|\t\t|%#04.0x|\t|%#04.0x|\n", "%#04.0", a, d, b, c);
	printf("%-8s|%#4.0x|\t\t|%#4.0x|\t\t|%#4.0x|\t|%#4.0x|\n", "%#4.0", a, d, b, c);
	printf("%-8s|%4.6x|\t|%4.6x|\t|%4.6x|\t|%4.6x|\n", "%4.6", a, d, b, c);
	printf("%-8s|%#4.6x|\t|%#4.6x|\t|%#4.6x|\t|%#4.6x|\n", "%#4.6", a, d, b, c);
	printf("%-8s|%6.4x|\t|%6.4x|\t|%6.4x|\t|%6.4x|\n", "%6.4", a, d, b, c);
	printf("%-8s|%.4x|\t\t|%.4x|\t\t|%.4x|\t|%.4x|\n", "%.4", a, d, b, c);
	printf("%-8s|%#10x|\t|%#10x|\t|%#10x|\t|%#10x|\n", "%#10", a, d, b, c);
	printf("%-8s|%7x|\t|%7x|\t|%7x|\t|%7x|\n", "%7", a, d, b, c);
	printf("%-8s|%0x|\t\t|%0x|\t\t|%0x|\t|%0x|\n", "%0", a, d, b, c);
	printf("%-8s|%07x|\t|%07x|\t|%07x|\t|%07x|\n", "%07", a, d, b, c);
	printf("%-8s|%07.0x|\t|%07.0x|\t|%07.0x|\t|%07.0x|\n", "%07.0", a, d, b, c);
	printf("\n%-8s|%#-10x|\t|%#-10x|\t|%#-10x|\t|%#-10x|\n", "%#-10", a, d, b, c);
	printf("%-8s|%-x|\t\t|%-x|\t\t|%-x|\t|%-x|\n", "%-", a, d, b, c);
	printf("%-8s|%-7x|\t|%-7x|\t|%-7x|\t|%-7x|\n", "%-7", a, d, b, c);
	printf("%-8s|%-7.4x|\t|%-7.4x|\t|%-7.4x|\t|%-7.4x|\n", "%-7.4", a, d, b, c);
	printf("%-8s|%-7.0x|\t|%-7.0x|\t|%-7.0x|\t|%-7.0x|\n", "%-7.0", a, d, b, c);
	printf("%-8s|%-4.7x|\t|%-4.7x|\t|%-4.7x|\t|%-4.7x|\n", "%-4.7", a, d, b, c);
	printf("%-8s|%#-7x|\t|%#-7x|\t|%#-7x|\t|%#-7x|\n", "%#-7", a, d, b, c);
	printf("%-8s|%-#x|\t\t|%-#x|\t\t|%-#x|\t|%-#x|\n", "%-#", a, d, b, c);
	printf("%-8s|%-4x|\t\t|%-4x|\t\t|%-4x|\t|%-4x|\n", "%-4", a, d, b, c);
	printf("\n%-8s|%#5x|\t\t|%#5x|\t\t|%#5x|\t|%#5x|\n", "%#5", a, d, b, c);
	printf("%-8s|%#5.2x|\t\t|%#5.2x|\t\t|%#5.2x|\t|%#5.2x|\n", "%#5.2", a, d, b, c);
	printf("%-8s|%#4.7x|\t|%#4.7x|\t|%#4.7x|\t|%#4.7x|\n", "%#4.7", a, d, b, c);
	printf("%-8s|%#7.4x|\t|%#7.4x|\t|%#7.4x|\t|%#7.4x|\n", "%#7.4", a, d, b, c);
	printf("%-8s|%#-5x|\t\t|%#-5x|\t\t|%#-5x|\t|%#-5x|\n", "%#-5", a, d, b, c);
	printf("%-8s|%#-1x|\t\t|%#-1x|\t\t|%#-1x|\t|%#-1x|\n", "%#-1", a, d, b, c);
	printf("%-8s|%#-.1x|\t\t|%#-.1x|\t\t|%#-.1x|\t|%#-.1x|\n", "%#-.1", a, d, b, c);
	printf("%-8s|%-#5.2x|\t\t|%-#5.2x|\t\t|%-#5.2x|\t|%-#5.2x|\n", "%-#5.2", a, d, b, c);
	printf("%-8s|%-#3.6x|\t|%-#3.6x|\t|%-#3.6x|\t|%-#3.6x|\n", "%-#3.6", a, d, b, c);

	printf("\n%-8s|%X|\t\t|%X|\t\t|%X|\t|%X|\n", "%", a, d, b, c);
	printf("%-8s|%#X|\t\t|%#X|\t\t|%#X|\t|%#X|\n", "%#", a, d, b, c);
	printf("%-8s|%1X|\t\t|%1X|\t\t|%1X|\t|%1X|\n", "%1", a, d, b, c);
	printf("%-8s|%2X|\t\t|%2X|\t\t|%2X|\t|%2X|\n", "%2", a, d, b, c);
	printf("%-8s|%2.2X|\t\t|%2.2X|\t\t|%2.2X|\t|%2.2X|\n", "%2.2", a, d, b, c);
	printf("%-8s|%.0X|\t\t|%.0X|\t\t|%.0X|\t|%.0X|\n", "%.0", a, d, b, c);
	printf("%-8s|%#.0X|\t\t|%#.0X|\t\t|%#.0X|\t|%#.0X|\n", "%#.0", a, d, b, c);
	printf("%-8s|%4.0X|\t\t|%4.0X|\t\t|%4.0X|\t|%4.0X|\n", "%4.0", a, d, b, c);
	printf("%-8s|%04.0X|\t\t|%04.0X|\t\t|%04.0X|\t|%04.0X|\n", "%04.0", a, d, b, c);
	printf("%-8s|%#04.0X|\t\t|%#04.0X|\t\t|%#04.0X|\t|%#04.0X|\n", "%#04.0", a, d, b, c);
	printf("%-8s|%#4.0X|\t\t|%#4.0X|\t\t|%#4.0X|\t|%#4.0X|\n", "%#4.0", a, d, b, c);
	printf("%-8s|%4.6X|\t|%4.6X|\t|%4.6X|\t|%4.6X|\n", "%4.6", a, d, b, c);
	printf("%-8s|%#4.6X|\t|%#4.6X|\t|%#4.6X|\t|%#4.6X|\n", "%#4.6", a, d, b, c);
	ft_printf("\t|%#4.6X|\t|%#4.6X|\t|%#4.6X|\t|%#4.6X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%6.4X|\t|%6.4X|\t|%6.4X|\t|%6.4X|\n", "%6.4", a, d, b, c);
	ft_printf("\t|%6.4X|\t|%6.4X|\t|%6.4X|\t|%6.4X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%.4X|\t\t|%.4X|\t\t|%.4X|\t|%.4X|\n", "%.4", a, d, b, c);
	ft_printf("\t|%.4X|\t\t|%.4X|\t\t|%.4X|\t|%.4X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%#10X|\t|%#10X|\t|%#10X|\t|%#10X|\n", "%#10", a, d, b, c);
	ft_printf("\t|%#10X|\t|%#10X|\t|%#10X|\t|%#10X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%7X|\t|%7X|\t|%7X|\t|%7X|\n", "%7", a, d, b, c);
	ft_printf("\t|%7X|\t|%7X|\t|%7X|\t|%7X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%0X|\t\t|%0X|\t\t|%0X|\t|%0X|\n", "%0", a, d, b, c);
	ft_printf("\t|%0X|\t\t|%0X|\t\t|%0X|\t|%0X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%07X|\t|%07X|\t|%07X|\t|%07X|\n", "%07", a, d, b, c);
	ft_printf("\t|%07X|\t|%07X|\t|%07X|\t|%07X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%07.0X|\t|%07.0X|\t|%07.0X|\t|%07.0X|\n", "%07.0", a, d, b, c);
	ft_printf("\t|%07.0X|\t|%07.0X|\t|%07.0X|\t|%07.0X|\n", 0, 17, -4242, 1096382);
	printf("\n%-8s|%#-10X|\t|%#-10X|\t|%#-10X|\t|%#-10X|\n", "%#-10", a, d, b, c);
	ft_printf("\t|%#-10X|\t|%#-10X|\t|%#-10X|\t|%#-10X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%-X|\t\t|%-X|\t\t|%-X|\t|%-X|\n", "%-", a, d, b, c);
	ft_printf("\t|%-X|\t\t|%-X|\t\t|%-X|\t|%-X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%-7X|\t|%-7X|\t|%-7X|\t|%-7X|\n", "%-7", a, d, b, c);
	ft_printf("\t|%-7X|\t|%-7X|\t|%-7X|\t|%-7X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%-7.4X|\t|%-7.4X|\t|%-7.4X|\t|%-7.4X|\n", "%-7.4", a, d, b, c);
	ft_printf("\t|%-7.4X|\t|%-7.4X|\t|%-7.4X|\t|%-7.4X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%-7.0X|\t|%-7.0X|\t|%-7.0X|\t|%-7.0X|\n", "%-7.0", a, d, b, c);
	ft_printf("\t|%-7.0X|\t|%-7.0X|\t|%-7.0X|\t|%-7.0X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%-4.7X|\t|%-4.7X|\t|%-4.7X|\t|%-4.7X|\n", "%-4.7", a, d, b, c);
	ft_printf("\t|%-4.7X|\t|%-4.7X|\t|%-4.7X|\t|%-4.7X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%#-7X|\t|%#-7X|\t|%#-7X|\t|%#-7X|\n", "%#-7", a, d, b, c);
	ft_printf("\t|%#-7X|\t|%#-7X|\t|%#-7X|\t|%#-7X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%-#X|\t\t|%-#X|\t\t|%-#X|\t|%-#X|\n", "%-#", a, d, b, c);
	ft_printf("\t|%-#X|\t\t|%-#X|\t\t|%-#X|\t|%-#X|\n", 0, 17, -4242, 1096382);
	printf("%-8s|%-4X|\t\t|%-4X|\t\t|%-4X|\t|%-4X|\n", "%-4", a, d, b, c);
	ft_printf("\t|%-4X|\t\t|%-4X|\t\t|%-4X|\t|%-4X|\n", 0, 17, -4242, 1096382);
	printf("\n%-8s|%#5X|\t\t|%#5X|\t\t|%#5X|\t|%#5X|\n", "%#5", a, d, b, c);
	ft_printf("\t|%#5X|\t\t|%#5X|\t\t|%#5X|\t|%#5X|\n",  a, d, b, c);
	printf("%-8s|%#5.2X|\t\t|%#5.2X|\t\t|%#5.2X|\t|%#5.2X|\n", "%#5.2", a, d, b, c);
	ft_printf("\t|%#5.2X|\t\t|%#5.2X|\t\t|%#5.2X|\t|%#5.2X|\n",  a, d, b, c);
	printf("%-8s|%#4.7X|\t|%#4.7X|\t|%#4.7X|\t|%#4.7X|\n", "%#4.7", a, d, b, c);
	ft_printf("\t|%#4.7X|\t|%#4.7X|\t|%#4.7X|\t|%#4.7X|\n",  a, d, b, c);
	printf("%-8s|%#7.4X|\t|%#7.4X|\t|%#7.4X|\t|%#7.4X|\n", "%#7.4", a, d, b, c);
	ft_printf("\t|%#7.4X|\t|%#7.4X|\t|%#7.4X|\t|%#7.4X|\n",  a, d, b, c);
	printf("%-8s|%#-5X|\t\t|%#-5X|\t\t|%#-5X|\t|%#-5X|\n", "%#-5", a, d, b, c);
	ft_printf("\t|%#-5X|\t\t|%#-5X|\t\t|%#-5X|\t|%#-5X|\n",  a, d, b, c);
	printf("%-8s|%#-1X|\t\t|%#-1X|\t\t|%#-1X|\t|%#-1X|\n", "%#-1", a, d, b, c);
	ft_printf("\t|%#-1X|\t\t|%#-1X|\t\t|%#-1X|\t|%#-1X|\n",  a, d, b, c);
	printf("%-8s|%#-.1X|\t\t|%#-.1X|\t\t|%#-.1X|\t|%#-.1X|\n", "%#-.1", a, d, b, c);
	ft_printf("\t|%#-.1X|\t\t|%#-.1X|\t\t|%#-.1X|\t|%#-.1X|\n",  a, d, b, c);
	printf("%-8s|%-#5.2X|\t\t|%-#5.2X|\t\t|%-#5.2X|\t|%-#5.2X|\n", "%-#5.2", a, d, b, c);
	ft_printf("\t|%-#5.2X|\t\t|%-#5.2X|\t\t|%-#5.2X|\t|%-#5.2X|\n", a, d, b, c);
	printf("%-8s|%-#3.6X|\t|%-#3.6X|\t|%-#3.6X|\t|%-#3.6X|\n", "%-#3.6", a, d, b, c);
	ft_printf("\t|%-#3.6X|\t|%-#3.6X|\t|%-#3.6X|\t|%-#3.6X|\n",  a, d, b, c);

	unsigned long long ll = 18446744073709551615u;
	printf("\nCASES:\t18,446,744,073,709,551,615\n");
	printf("\t|%llx|\n", ll);
	ft_printf("\t|%llx|\n", ll);

	printf("|%x|\t|%x|\t|%x|\t|%x|\n", 15, 16, 32, 48);
	ft_printf("|%x|\t|%x|\t|%x|\t|%x|\n", 15, 16, 32, 48);

	// undefined
	// printf("%-8s|% 4x|\t|% 4x|\t|% 4x|\n", "% 4", a, d, b, c);
	// printf("%-8s|%+x|\t|%+x|\t|%+x|\n", "%+", a, d, b, c);
}

void	octals(void)
{
	printf("\n%-8s|%o|\t\t|%o|\t\t|%o|\n","%", 0, 17, 1234);
	ft_printf("\t|%o|\t\t|%o|\t\t|%o|\n", 0, 17, 1234);
	printf("%-8s|%0o|\t\t|%0o|\t\t|%0o|\n","%0", 0, 17, 1234);
	ft_printf("\t|%0o|\t\t|%0o|\t\t|%0o|\n", 0, 17, 1234);
	printf("%-8s|%.o|\t\t|%.o|\t\t|%.o|\n","%.", 0, 17, 1234);
	ft_printf("\t|%.o|\t\t|%.o|\t\t|%.o|\n", 0, 17, 1234);
	printf("%-8s|%.0o|\t\t|%.0o|\t\t|%.0o|\n","%.0", 0, 17, 1234);
	ft_printf("\t|%.0o|\t\t|%.0o|\t\t|%.0o|\n", 0, 17, 1234);
	printf("%-8s|%1.0o|\t\t|%1.0o|\t\t|%1.0o|\n","%1.0", 0, 17, 1234);
	ft_printf("\t|%1.0o|\t\t|%1.0o|\t\t|%1.0o|\n", 0, 17, 1234);
	printf("%-8s|%0.o|\t\t|%0.o|\t\t|%0.o|\n","%0.", 0, 17, 1234);
	ft_printf("\t|%0.o|\t\t|%0.o|\t\t|%0.o|\n", 0, 17, 1234);
	printf("%-8s|%5.0o|\t\t|%5.0o|\t\t|%5.0o|\n","%5.0", 0, 17, 1234);
	ft_printf("\t|%5.0o|\t\t|%5.0o|\t\t|%5.0o|\n", 0, 17, 1234);
	printf("%-8s|%#o|\t\t|%#o|\t\t|%#o|\n","%#", 0, 17, 1234);
	ft_printf("\t|%#o|\t\t|%#o|\t\t|%#o|\n", 0, 17, 1234);
	printf("%-8s|%#0o|\t\t|%#0o|\t\t|%#0o|\n","%#0", 0, 17, 1234);
	ft_printf("\t|%#0o|\t\t|%#0o|\t\t|%#0o|\n", 0, 17, 1234);
	printf("%-8s|%0o|\t\t|%0o|\t\t|%0o|\n","%0", 0, 17, 1234);
	ft_printf("\t|%0o|\t\t|%0o|\t\t|%0o|\n", 0, 17, 1234);
	printf("%-8s|%03.5o|\t\t|%03.5o|\t\t|%03.5o|\n","%03.5", 0, 17, 1234);
	ft_printf("\t|%03.5o|\t\t|%03.5o|\t\t|%03.5o|\n", 0, 17, 1234);
	printf("%-8s|%08o|\t|%08o|\t|%08o|\n","%08", 0, 17, 1234);
	ft_printf("\t|%08o|\t|%08o|\t|%08o|\n", 0, 17, 1234);
	printf("%-8s|%08.0o|\t|%08.0o|\t|%08.0o|\n","%08.0", 0, 17, 1234);
	ft_printf("\t|%08.0o|\t|%08.0o|\t|%08.0o|\n", 0, 17, 1234);
	printf("%-8s|%8o|\t|%8o|\t|%8o|\n","%8", 0, 17, 1234);
	ft_printf("\t|%8o|\t|%8o|\t|%8o|\n", 0, 17, 1234);
	printf("%-8s|%#8o|\t|%#8o|\t|%#8o|\n","%#8", 0, 17, 1234);
	ft_printf("\t|%#8o|\t|%#8o|\t|%#8o|\n", 0, 17, 1234);
	printf("%-8s|%#08o|\t|%#08o|\t|%#08o|\n","%#08", 0, 17, 1234);
	ft_printf("\t|%#08o|\t|%#08o|\t|%#08o|\n", 0, 17, 1234);
	printf("%-8s|%#6o|\t|%#6o|\t|%#6o|\n","%#6", 0, 17, 1234);
	ft_printf("\t|%#6o|\t|%#6o|\t|%#6o|\n", 0, 17, 1234);
	printf("%-8s|%.8o|\t|%.8o|\t|%.8o|\n","%.8", 0, 17, 1234);
	ft_printf("\t|%.8o|\t|%.8o|\t|%.8o|\n", 0, 17, 1234);
	printf("%-8s|%4.8o|\t|%4.8o|\t|%4.8o|\n","%4.8", 0, 17, 1234);
	ft_printf("\t|%4.8o|\t|%4.8o|\t|%4.8o|\n", 0, 17, 1234);
	printf("%-8s|%8.4o|\t|%8.4o|\t|%8.4o|\n","%8.4", 0, 17, 1234);
	ft_printf("\t|%8.4o|\t|%8.4o|\t|%8.4o|\n", 0, 17, 1234);
	printf("%-8s|%#.8o|\t|%#.8o|\t|%#.8o|\n","%#.8", 0, 17, 1234);
	ft_printf("\t|%#.8o|\t|%#.8o|\t|%#.8o|\n", 0, 17, 1234);
	printf("%-8s|%#4.8o|\t|%#4.8o|\t|%#4.8o|\n","%#4.8", 0, 17, 1234);
	ft_printf("\t|%#4.8o|\t|%#4.8o|\t|%#4.8o|\n", 0, 17, 1234);
	printf("%-8s|%#8.4o|\t|%#8.4o|\t|%#8.4o|\n","%#8.4", 0, 17, 1234);
	ft_printf("\t|%#8.4o|\t|%#8.4o|\t|%#8.4o|\n", 0, 17, 1234);
	printf("%-8s|%#5.1o|\t\t|%#5.1o|\t\t|%#5.1o|\n","%#5.1", 0, 17, 1234);
	ft_printf("\t|%#5.1o|\t\t|%#5.1o|\t\t|%#5.1o|\n", 0, 17, 1234);
	printf("%-8s|%#8.5o|\t|%#8.5o|\t|%#8.5o|\n","%#8.5", 0, 17, 1234);
	ft_printf("\t|%#8.5o|\t|%#8.5o|\t|%#8.5o|\n", 0, 17, 1234);
	printf("%-8s|%#.o|\t\t|%#.o|\t\t|%#.o|\n","%#.", 0, 17, 1234);
	ft_printf("\t|%#.o|\t\t|%#.o|\t\t|%#.o|\n", 0, 17, 1234);
	printf("%-8s|%#0.o|\t\t|%#0.o|\t\t|%#0.o|\n","%#0.", 0, 17, 1234);
	ft_printf("\t|%#0.o|\t\t|%#0.o|\t\t|%#0.o|\n", 0, 17, 1234);
	printf("%-8s|%0.3o|\t\t|%0.3o|\t\t|%0.3o|\n","%0.3", 0, 17, 1234);
	ft_printf("\t|%0.3o|\t\t|%0.3o|\t\t|%0.3o|\n", 0, 17, 1234);
	printf("%-8s|%#6.0o|\t|%#6.0o|\t|%#6.0o|\n","%#6.0", 0, 17, 1234);
	ft_printf("\t|%#6.0o|\t|%#6.0o|\t|%#6.0o|\n", 0, 17, 1234);
	printf("\n%-8s|%-o|\t\t|%-o|\t\t|%-o|\n","%-", 0, 17, 1234);
	ft_printf("\t|%-o|\t\t|%-o|\t\t|%-o|\n", 0, 17, 1234);
	printf("%-8s|%-.o|\t\t|%-.o|\t\t|%-.o|\n","%-.", 0, 17, 1234);
	ft_printf("\t|%-.o|\t\t|%-.o|\t\t|%-.o|\n", 0, 17, 1234);
	printf("%-8s|%#-.o|\t\t|%#-.o|\t\t|%#-.o|\n","%#-.", 0, 17, 1234);
	ft_printf("\t|%#-.o|\t\t|%#-.o|\t\t|%#-.o|\n", 0, 17, 1234);
	printf("%-8s|%-4.0o|\t\t|%-4.0o|\t\t|%-4.0o|\n","%-4.0", 0, 17, 1234);
	ft_printf("\t|%-4.0o|\t\t|%-4.0o|\t\t|%-4.0o|\n", 0, 17, 1234);
	printf("%-8s|%#-4.0o|\t\t|%#-4.0o|\t\t|%#-4.0o|\n","%#-4.0", 0, 17, 1234);
	ft_printf("\t|%#-4.0o|\t\t|%#-4.0o|\t\t|%#-4.0o|\n", 0, 17, 1234);
	printf("%-8s|%-6o|\t|%-6o|\t|%-6o|\n","%-6", 0, 17, 1234);
	ft_printf("\t|%-6o|\t|%-6o|\t|%-6o|\n", 0, 17, 1234);
	printf("%-8s|%#-6o|\t|%#-6o|\t|%#-6o|\n","%#-6", 0, 17, 1234);
	ft_printf("\t|%#-6o|\t|%#-6o|\t|%#-6o|\n", 0, 17, 1234);
	printf("%-8s|%-8.4o|\t|%-8.4o|\t|%-8.4o|\n","%-8.4", 0, 17, 1234);
	ft_printf("\t|%-8.4o|\t|%-8.4o|\t|%-8.4o|\n", 0, 17, 1234);
	printf("%-8s|%#-8.4o|\t|%#-8.4o|\t|%#-8.4o|\n","%#-8.4", 0, 17, 1234);
	ft_printf("\t|%#-8.4o|\t|%#-8.4o|\t|%#-8.4o|\n", 0, 17, 1234);
	printf("%-8s|%-4.8o|\t|%-4.8o|\t|%-4.8o|\n","%-4.8", 0, 17, 1234);
	ft_printf("\t|%-4.8o|\t|%-4.8o|\t|%-4.8o|\n", 0, 17, 1234);
	printf("%-8s|%#-4.8o|\t|%#-4.8o|\t|%#-4.8o|\n","%#-4.8", 0, 17, 1234);
	ft_printf("\t|%#-4.8o|\t|%#-4.8o|\t|%#-4.8o|\n", 0, 17, 1234);
	printf("%-8s|%-.5o|\t\t|%-.5o|\t\t|%-.5o|\n","%-.5", 0, 17, 1234);
	ft_printf("\t|%-.5o|\t\t|%-.5o|\t\t|%-.5o|\n", 0, 17, 1234);

	printf("|%o|\t|%o|\t|%o|\t|%o|\t|%o|\n", 7, 8, 16, 23, 24);
    ft_printf("|%o|\t|%o|\t|%o|\t|%o|\t|%o|\n", 7, 8, 16, 23, 24);
	// undefined
	// printf("%-8s|% o|%16s|% o|%16s|% o|\n","% o0:", 0, "% o17: ", 17, "% o1234: ", 1234);
	// ft_printf("\t|% o|\t\t|% o|\t\t|% o|\n", 0, 17, 1234);
	// printf("%-8s|%+o|%16s|%+o|%16s|%+o|\n","%+o0:", 0, "%+o17: ", 17, "%+o1234: ", 1234);
	// ft_printf("\t|%+o|\t\t|%+o|\t\t|%+o|\n", 0, 17, 1234);
}

void	strt(void)
{
	char *str = "Random x10, another20";

	printf("%-8s|%s|\n", "%s", str);
	ft_printf("\t|%s|\n",  str);
	printf("%-8s|%.5s|\n", "%.5s", str);
	ft_printf("\t|%.5s|\n",  str);
	printf("%-8s|%8s|\n", "%8s", str);
	ft_printf("\t|%8s|\n",  str);
	printf("%-8s|%8.5s|\n", "%8.5s", str);
	ft_printf("\t|%8.5s|\n",  str);
	printf("%-8s|%-s|\n", "%-s", str);
	ft_printf("\t|%-s|\n",  str);
	printf("%-8s|%-.5s|\n", "%-.5s", str);
	ft_printf("\t|%-.5s|\n",  str);
	printf("%-8s|%-8s|\n", "%-8s", str);
	ft_printf("\t|%-8s|\n",  str);
	printf("%-8s|%-8.5s|\n", "%-8.5s", str);
	ft_printf("\t|%-8.5s|\n", str);

	str = "test5";
	printf("%-8s|%s|\n", "%s", str);
	ft_printf("\t|%s|\n",  str);
	printf("%-8s|%8s|\n", "%8s", str);
	ft_printf("\t|%8s|\n",  str);
	printf("%-8s|%-s|\n", "%-s", str);
	ft_printf("\t|%-s|\n",  str);
	printf("%-8s|%-8.2s|\n", "%-8.2s", str);
	ft_printf("\t|%-8.2s|\n",  str);

	char *test = NULL;
	printf("%-8s|%s|\n", "%s", test);
	ft_printf("\t|%s|\n",  test);
	printf("%-8s|%8s|\n", "%8s", test);
	ft_printf("\t|%8s|\n",  test);
	printf("%-8s|%8.4s|\n", "%8.4s", test);
	ft_printf("\t|%8.4s|\n",  test);
	//	undefined
	// printf("%-8s|%#s|\n", "%#s", str);
	// printf("%-8s|%+s|\n", "%+s", str);
	// printf("%-8s|%0s|\n", "%0s", str);
	// printf("%-8s|% s|\n", "% s", str);

}

void	adrt(void)
{
	int a = 42;
	float b = 100.1;
	char c = 'c';

	printf("%-8s|%p|\t|%p|\t|%p|\n", "%", &a, &b, &c);
	ft_printf("%-8s|%p|\t|%p|\t|%p|\n", "%", &a, &b, &c);
	printf("%-8s|%16p|\t|%16p|\t|%16p|\n", "%16", &a, &b, &c);
	ft_printf("%-8s|%16p|\t|%16p|\t|%16p|\n", "%16", &a, &b, &c);
	printf("%-8s|%-16p|\t|%-16p|\t|%-16p|\n", "%-16", &a, &b, &c);
	ft_printf("%-8s|%-16p|\t|%-16p|\t|%-16p|\n", "%-16", &a, &b, &c);
	printf("%-8s|%5p|\t|%5p|\t|%5p|\n", "%5", &a, &b, &c);
	ft_printf("%-8s|%5p|\t|%5p|\t|%5p|\n", "%5", &a, &b, &c);

	char *ptr = NULL;
	printf("|%p|\n", ptr);
	ft_printf("|%p|\n", ptr);
	printf("|%7p|\n", ptr);
	ft_printf("|%7p|\n", ptr);
	printf("|%-7p|\n", ptr);
	ft_printf("|%-7p|\n", ptr);

	//	undefined
	// printf("%-8s|% p|\t|% p|\t|% p|\n", "% ", &a, &b, &c);
	// printf("%-8s|%+p|\t|%+p|\t|%+p|\n", "%+", &a, &b, &c);
	// printf("%-8s|%016p|\t|%016p|\t|%016p|\n", "%016", &a, &b, &c);
	// printf("%-8s|%.5p|\t|%.5p|\t|%.5p|\n", "%.5", &a, &b, &c);
}

void	printed(void)
{
	printf("\n\t--- PRINTED %%n ---\n");
	printf("CASE:\t\"test%%n%%n\\ttest%%n x %%n\"\n\n");

	int a, b, c, d;
	printf("test%n%n\ttest%n x %n\n", &a, &b, &c, &d);
	printf("%d\t%d\t%d\t%d\n", a, b, c, d);
	a = 0, b = 0, c = 0, d = 0;
	printf("\n\tRESETTED RETURN VALUES: %d %d %d %d\n\n", a, b, c, d);
	ft_printf("test%n%n\ttest%n x %n\n", &a, &b, &c, &d);
	ft_printf("%d\t%d\t%d\t%d\n", a, b, c, d);

	//	undefined
	// printf("test%.5n%.5n\ttest%.5n x %.5n\n", &a, &b, &c, &d);
	// printf("test% n% n\ttest% n x % n\n", &a, &b, &c, &d);
	// printf("test%+n%+n\ttest%+n x %+n\n", &a, &b, &c, &d);
	// printf("test%0n%0n\ttest%0n x %0n\n", &a, &b, &c, &d);
	// printf("test%8n%8n\ttest%8n x %8n\n", &a, &b, &c, &d);
	// printf("test%-n%-n\ttest%-n x %-n\n", &a, &b, &c, &d);

}

void	floatt(void)
{
	double	z = 0, fm = 100.1234, f = -100.1234;
	long double a = 200.5;
	unsigned long long b = 12345;

	printf("%-8s|%f|\t|%f|\t|%f|\t|%f|\t\t|%f|\n", "%", (double)0, 100.5, 42.49, -42.5555, 10000.5000912);
	ft_printf("\t|%f|\t|%f|\t|%f|\t|%f|\t\t|%f|\n", (double)0, 100.5, 42.49, -42.5555, 10000.5000912);
	printf("|%f|\n", 100.525);
	ft_printf("|%f|\n", 100.525);
	printf("|%f|\n", 6985.123459876);
	ft_printf("|%f|\n", 6985.123459876);
	printf("|%f|\n", 6985123.12345987610101789123);
	ft_printf("|%f|\n", 6985123.12345987610101789123);
	printf("|%f|\n", 1234567891.4);
	ft_printf("|%f|\n", 1234567891.4);
	printf("|%f|\n", 7.1234567891234567);
	ft_printf("|%f|\n", 7.1234567891234567);
	printf("|%Lf|\n", a);
	ft_printf("|%Lf|\n", a);
	printf("|%Lf|\n", 9999.4l);
	ft_printf("|%Lf|\n", 9999.4l);
	printf("|%.10Lf|\n", -2.9123349876123123l);
	ft_printf("|%.10Lf|\n", -2.9123349876123123l);
	printf("|%.10Lf|\n", 2.9123349876123123l);
	ft_printf("|%.10Lf|\n", 2.9123349876123123l);
	printf("|%Lf|\n", (long double)b);
	ft_printf("|%Lf|\n", (long double)b);
	printf("\n");
	printf("%-8s", "%f");
	printf("|%f|\t|%f|\t|%f|\n", z, fm , f);
	ft_printf("\t|%f|\t|%f|\t|%f|\n", z, fm , f);
	printf("%-8s", "%+f");
	printf("|%+f|\t|%+f|\t|%+f|\n", z, fm , f);
	ft_printf("\t|%+f|\t|%+f|\t|%+f|\n", z, fm , f);
	printf("%-8s", "%-f");
	printf("|%-f|\t|%-f|\t|%-f|\n", z, fm , f);
	ft_printf("\t|%-f|\t|%-f|\t|%-f|\n", z, fm , f);
	printf("%-8s", "%0f");
	printf("|%0f|\t|%0f|\t|%0f|\n", z, fm , f);
	ft_printf("\t|%0f|\t|%0f|\t|%0f|\n", z, fm , f);
	printf("%-8s", "%8f");
	printf("|%8f|\t|%8f|\t|%8f|\n", z, fm , f);
	ft_printf("\t|%8f|\t|%8f|\t|%8f|\n", z, fm , f);
	printf("%-8s", "%3f");
	printf("|%3f|\t|%3f|\t|%3f|\n", z, fm , f);
	ft_printf("\t|%3f|\t|%3f|\t|%3f|\n", z, fm , f);
	printf("%-8s", "%.0f");
	printf("|%.0f|\t|%.0f|\t|%.0f|\n", z, fm , f);
	ft_printf("\t|%.0f|\t|%.0f|\t|%.0f|\n", z, fm , f);
	printf("%-8s", "%.3f");
	printf("|%.3f|\t|%.3f|\t|%.3f|\n", z, fm , f);
	ft_printf("\t|%.3f|\t|%.3f|\t|%.3f|\n", z, fm , f);
	printf("%-8s", "%.3f");
	printf("|%.3f|\t|%.3f|\t|%.3f|\n", z, fm , f);
	ft_printf("\t|%.3f|\t|%.3f|\t|%.3f|\n", z, fm , f);
	printf("%-8s", "%.9f");
	printf("|%.9f|\t|%.9f|\t|%.9f|\n", z, fm , f);
	ft_printf("\t|%.9f|\t|%.9f|\t|%.9f|\n", z, fm , f);
	printf("%-8s", "%#f");
	printf("|%#f|\t|%#f|\t|%#f|\n", z, fm , f);
	ft_printf("\t|%#f|\t|%#f|\t|%#f|\n", z, fm , f);
	printf("%-8s", "% f");
	printf("|% f|\t|% f|\t|% f|\n", z, fm , f);
	ft_printf("\t|% f|\t|% f|\t|% f|\n", z, fm , f);

	printf("%-8s", "%+0f");
	printf("|%+0f|\t|%+0f|\t|%+0f|\n", z, fm , f);
	ft_printf("\t|%+0f|\t|%+0f|\t|%+0f|\n", z, fm , f);
	printf("%-8s", "%+0.0f");
	printf("|%+0.0f|\t|%+0.0f|\t|%+0.0f|\n", z, fm , f);
	ft_printf("\t|%+0.0f|\t|%+0.0f|\t|%+0.0f|\n", z, fm , f);
	printf("%-8s", "%+0.3f");
	printf("|%+0.3f|\t|%+0.3f|\t|%+0.3f|\n", z, fm , f);
	ft_printf("\t|%+0.3f|\t|%+0.3f|\t|%+0.3f|\n", z, fm , f);
	printf("%-8s", "%+03f");
	printf("|%+0.8f|\t|%+0.8f|\t|%+0.8f|\n", z, fm , f);
	ft_printf("\t|%+0.8f|\t|%+0.8f|\t|%+0.8f|\n", z, fm , f);
	printf("%-8s", "%+03f");
	printf("|%+03f|\t|%+03f|\t|%+03f|\n", z, fm , f);
	ft_printf("\t|%+03f|\t|%+03f|\t|%+03f|\n", z, fm , f);
	printf("%-8s", "%+03.0f");
	printf("|%+03.0f|\t|%+03.0f|\t|%+03.0f|\n", z, fm , f);
	ft_printf("\t|%+03.0f|\t|%+03.0f|\t|%+03.0f|\n", z, fm , f);
	printf("%-8s", "%+03.8f");
	printf("|%+03.8f|\t|%+03.8f|\t|%+03.8f|\n", z, fm , f);
	ft_printf("\t|%+03.8f|\t|%+03.8f|\t|%+03.8f|\n", z, fm , f);
	printf("%-8s", "%+08.3f");
	printf("|%+08.3f|\t|%+08.3f|\t|%+08.3f|\n", z, fm , f);
	ft_printf("\t|%+08.3f|\t|%+08.3f|\t|%+08.3f|\n", z, fm , f);
	printf("%-8s", "%+08f");
	printf("|%+08f|\t|%+08f|\t|%+08f|\n", z, fm , f);
	ft_printf("\t|%+08f|\t|%+08f|\t|%+08f|\n", z, fm , f);
	printf("%-8s", "%+08.0f");
	printf("|%+08.0f|\t|%+08.0f|\t|%+08.0f|\n", z, fm , f);
	ft_printf("\t|%+08.0f|\t|%+08.0f|\t|%+08.0f|\n", z, fm , f);

	printf("%-8s", "%+-f");
	printf("|%+-f|\t|%+-f|\t|%+-f|\n", z, fm , f);
	ft_printf("\t|%+-f|\t|%+-f|\t|%+-f|\n", z, fm , f);
	printf("%-8s", "%+-.0f");
	printf("|%+-.0f|\t|%+-.0f|\t|%+-.0f|\n", z, fm , f);
	ft_printf("\t|%+-.0f|\t|%+-.0f|\t|%+-.0f|\n", z, fm , f);
	printf("%-8s", "%+-.3f");
	printf("|%+-.3f|\t|%+-.3f|\t|%+-.3f|\n", z, fm , f);
	ft_printf("\t|%+-.3f|\t|%+-.3f|\t|%+-.3f|\n", z, fm , f);
	printf("%-8s", "%+-.8f");
	printf("|%+-.8f|\t|%+-.8f|\t|%+-.8f|\n", z, fm , f);
	ft_printf("\t|%+-.8f|\t|%+-.8f|\t|%+-.8f|\n", z, fm , f);
	printf("%-8s", "%+-3f");
	printf("|%+-3f|\t|%+-3f|\t|%+-3f|\n", z, fm , f);
	ft_printf("\t|%+-3f|\t|%+-3f|\t|%+-3f|\n", z, fm , f);
	printf("%-8s", "%+-3.0f");
	printf("|%+-3.0f|\t|%+-3.0f|\t|%+-3.0f|\n", z, fm , f);
	ft_printf("\t|%+-3.0f|\t|%+-3.0f|\t|%+-3.0f|\n", z, fm , f);
	printf("%-8s", "%+-3.8f");
	printf("|%+-3.8f|\t|%+-3.8f|\t|%+-3.8f|\n", z, fm , f);
	ft_printf("\t|%+-3.8f|\t|%+-3.8f|\t|%+-3.8f|\n", z, fm , f);
	printf("%-8s", "%+-8f");
	printf("|%+-8f|\t|%+-8f|\t|%+-8f|\n", z, fm , f);
	ft_printf("\t|%+-8f|\t|%+-8f|\t|%+-8f|\n", z, fm , f);
	printf("%-8s", "%+-8.0f");
	printf("|%+-8.0f|\t|%+-8.0f|\t|%+-8.0f|\n", z, fm , f);
	ft_printf("\t|%+-8.0f|\t|%+-8.0f|\t|%+-8.0f|\n", z, fm , f);
	printf("%-8s", "%+-8.3f");
	printf("|%+-8.3f|\t|%+-8.3f|\t|%+-8.3f|\n", z, fm , f);
	ft_printf("\t|%+-8.3f|\t|%+-8.3f|\t|%+-8.3f|\n", z, fm , f);

	printf("%-8s", "%+.0f");
	printf("|%+.0f|\t|%+.0f|\t|%+.0f|\n", z, fm , f);
	ft_printf("\t|%+.0f|\t|%+.0f|\t|%+.0f|\n", z, fm , f);
	printf("%-8s", "%+8.0f");
	printf("|%+8.0f|\t|%+8.0f|\t|%+8.0f|\n", z, fm , f);
	ft_printf("\t|%+8.0f|\t|%+8.0f|\t|%+8.0f|\n", z, fm , f);
	printf("%-8s", "%+8.3f");
	printf("|%+8.3f|\t|%+8.3f|\t|%+8.3f|\n", z, fm , f);
	ft_printf("\t|%+8.3f|\t|%+8.3f|\t|%+8.3f|\n", z, fm , f);
	printf("%-8s", "%+3.0f");
	printf("|%+3.0f|\t|%+3.0f|\t|%+3.0f|\n", z, fm , f);
	ft_printf("\t|%+3.0f|\t|%+3.0f|\t|%+3.0f|\n", z, fm , f);
	printf("%-8s", "%+3.8f");
	printf("|%+3.8f|\t|%+3.8f|\t|%+3.8f|\n", z, fm , f);
	ft_printf("\t|%+3.8f|\t|%+3.8f|\t|%+3.8f|\n", z, fm , f);

	printf("%-8s", "% 8f");
	printf("|% 8f|\t|% 8f|\t|% 8f|\n", z, fm , f);
	ft_printf("\t|% 8f|\t|% 8f|\t|% 8f|\n", z, fm , f);
	printf("%-8s", "% 8.0f");
	printf("|% 8.0f|\t|% 8.0f|\t|% 8.0f|\n", z, fm , f);
	ft_printf("\t|% 8.0f|\t|% 8.0f|\t|% 8.0f|\n", z, fm , f);
	printf("%-8s", "% 3f");
	printf("|% 3f|\t|% 3f|\t|% 3f|\n", z, fm , f);
	ft_printf("\t|% 3f|\t|% 3f|\t|% 3f|\n", z, fm , f);
	printf("%-8s", "% 0f");
	printf("|% 0f|\t|% 0f|\t|% 0f|\n", z, fm , f);
	ft_printf("\t|% 0f|\t|% 0f|\t|% 0f|\n", z, fm , f);
	printf("%-8s", "% 3.8f");
	printf("|% 3.8f|\t|% 3.8f|\t|% 3.8f|\n", z, fm , f);
	ft_printf("\t|% 3.8f|\t|% 3.8f|\t|% 3.8f|\n", z, fm , f);
	printf("%-8s", "% 8.3f");
	printf("|% 8.3f|\t|% 8.3f|\t|% 8.3f|\n", z, fm , f);
	ft_printf("\t|% 8.3f|\t|% 8.3f|\t|% 8.3f|\n", z, fm , f);
	printf("%-8s", "% -f");
	printf("|% -f|\t|% -f|\t|% -f|\n", z, fm , f);
	ft_printf("\t|% -f|\t|% -f|\t|% -f|\n", z, fm , f);
	printf("%-8s", "% -8f");
	printf("|% -8f|\t|% -8f|\t|% -8f|\n", z, fm , f);
	ft_printf("\t|% -8f|\t|% -8f|\t|% -8f|\n", z, fm , f);
	printf("%-8s", "% -3f");
	printf("|% -3f|\t|% -3f|\t|% -3f|\n", z, fm , f);
	ft_printf("\t|% -3f|\t|% -3f|\t|% -3f|\n", z, fm , f);

	printf("%-8s", "%8.0f");
	printf("|%8.0f|\t|%8.0f|\t|%8.0f|\n", z, fm , f);
	ft_printf("\t|%8.0f|\t|%8.0f|\t|%8.0f|\n", z, fm , f);
	printf("%-8s", "%8.3f");
	printf("|%8.3f|\t|%8.3f|\t|%8.3f|\n", z, fm , f);
	ft_printf("\t|%8.3f|\t|%8.3f|\t|%8.3f|\n", z, fm , f);
	printf("%-8s", "%3.0f");
	printf("|%3.0f|\t|%3.0f|\t|%3.0f|\n", z, fm , f);
	ft_printf("\t|%3.0f|\t|%3.0f|\t|%3.0f|\n", z, fm , f);
	printf("%-8s", "%3.8f");
	printf("|%3.8f|\t|%3.8f|\t|%3.8f|\n", z, fm , f);
	ft_printf("\t|%3.8f|\t|%3.8f|\t|%3.8f|\n", z, fm , f);

	printf("%-8s", "%-8f");
	printf("|%-8f|\t|%-8f|\t|%-8f|\n", z, fm , f);
	ft_printf("\t|%-8f|\t|%-8f|\t|%-8f|\n", z, fm , f);
	printf("%-8s", "%-8.0f");
	printf("|%-8.0f|\t|%-8.0f|\t|%-8.0f|\n", z, fm , f);
	ft_printf("\t|%-8.0f|\t|%-8.0f|\t|%-8.0f|\n", z, fm , f);
	printf("%-8s", "%+-8.0f");
	printf("|%+-8.0f|\t|%+-8.0f|\t|%+-8.0f|\n", z, fm , f);
	ft_printf("\t|%+-8.0f|\t|%+-8.0f|\t|%+-8.0f|\n", z, fm , f);
	printf("%-8s", "%-8.3f");
	printf("|%-8.3f|\t|%-8.3f|\t|%-8.3f|\n", z, fm , f);
	ft_printf("\t|%-8.3f|\t|%-8.3f|\t|%-8.3f|\n", z, fm , f);
	printf("%-8s", "%-3f");
	printf("|%-3f|\t|%-3f|\t|%-3f|\n", z, fm , f);
	ft_printf("\t|%-3f|\t|%-3f|\t|%-3f|\n", z, fm , f);
	printf("%-8s", "%-3.0f");
	printf("|%-3.0f|\t|%-3.0f|\t|%-3.0f|\n", z, fm , f);
	ft_printf("\t|%-3.0f|\t|%-3.0f|\t|%-3.0f|\n", z, fm , f);
	printf("%-8s", "%-3.8f");
	printf("|%-3.8f|\t|%-3.8f|\t|%-3.8f|\n", z, fm , f);
	ft_printf("\t|%-3.8f|\t|%-3.8f|\t|%-3.8f|\n", z, fm , f);

	printf("%-8s", "%+03.0f");
	printf("|%+03.0f|\t|%+03.0f|\t|%+03.0f|\n", z, fm , f);
	ft_printf("\t|%+03.0f|\t|%+03.0f|\t|%+03.0f|\n", z, fm , f);
	printf("%-8s", "%+08.0f");
	printf("|%+08.0f|\t|%+08.0f|\t|%+08.0f|\n", z, fm , f);
	ft_printf("\t|%+08.0f|\t|%+08.0f|\t|%+08.0f|\n", z, fm , f);
	printf("%-8s", "%+-3.0f");
	printf("|%+-3.0f|\t|%+-3.0f|\t|%+-3.0f|\n", z, fm , f);
	ft_printf("\t|%+-3.0f|\t|%+-3.0f|\t|%+-3.0f|\n", z, fm , f);
	printf("%-8s", "%+-8.0f");
	printf("|%+-8.0f|\t|%+-8.0f|\t|%+-8.0f|\n", z, fm , f);
	ft_printf("\t|%+-8.0f|\t|%+-8.0f|\t|%+-8.0f|\n", z, fm , f);
	printf("%-8s", "%+8.0f");
	printf("|%+8.0f|\t|%+8.0f|\t|%+8.0f|\n", z, fm , f);
	ft_printf("\t|%+8.0f|\t|%+8.0f|\t|%+8.0f|\n", z, fm , f);
	printf("%-8s", "%+3.0f");
	printf("|%+3.0f|\t|%+3.0f|\t|%+3.0f|\n", z, fm , f);
	ft_printf("\t|%+3.0f|\t|%+3.0f|\t|%+3.0f|\n", z, fm , f);
	printf("%-8s", "% 8.0f");
	printf("|% 8.0f|\t|% 8.0f|\t|% 8.0f|\n", z, fm , f);
	ft_printf("\t|% 8.0f|\t|% 8.0f|\t|% 8.0f|\n", z, fm , f);
	printf("%-8s", "%8.0f");
	printf("|%8.0f|\t|%8.0f|\t|%8.0f|\n", z, fm , f);
	ft_printf("\t|%8.0f|\t|%8.0f|\t|%8.0f|\n", z, fm , f);

	printf("%-8s|%#4.0f|\t\t|%#4.0f|\t\t|%#4.0f|\n", "%#4.0f", z, fm, f);
	ft_printf("\t|%#4.0f|\t\t|%#4.0f|\t\t|%#4.0f|\n", z, fm, f);
	printf("%-8s|%#08.0f|\t|%#08.0f|\t|%#08.0f|\n", "%#08.0f", z, fm, f);
	ft_printf("\t|%#08.0f|\t|%#08.0f|\t|%#08.0f|\n", z, fm, f);

	printf("%-8s", "%.2f");
	printf("|%.2f|\n", 1.15);
	ft_printf("\t|%.2f|\n", 1.15);
	printf("%-8s", "%.2f");
	printf("|%.2f|\n", 1.55);
	ft_printf("\t|%.2f|\n", 1.55);
	printf("%-8s", "%.2f");
	printf("|%.2f|\n", 1.59);
	ft_printf("\t|%.2f|\n", 1.59);
	printf("%-8s", "%.15f");
	printf("|%.15f|\n", 1.15);
	ft_printf("\t|%.15f|\n", 1.15);
	printf("%-8s", "%.16f");
	printf("|%.16f|\n", 1.15);
	ft_printf("\t|%.16f|\n", 1.15);
	printf("%-8s", "%.17f");
	printf("|%.17f|\n", 1.15);
	ft_printf("\t|%.17f|\n", 1.15);
	printf("%-8s", "%.5f");
	printf("|%.5f|\n", 6985.123459111);
	ft_printf("\t|%.5f|\n", 6985.123459111);
	printf("%-8s", "%.6f");
	printf("|%.6f|\n", 6985.123459111);
	ft_printf("\t|%.6f|\n", 6985.123459111);

	printf("%-8s|%#4.0f|\t\t|%#4.0f|\t\t|%#4.0f|\n", "%#4.0f", z, fm, f);
	ft_printf("\t|%#4.0f|\t\t|%#4.0f|\t\t|%#4.0f|\n", z, fm, f);
	printf("%-8s|%#08.0f|\t|%#08.0f|\t|%#08.0f|\n", "%#08.0f", z, fm, f);
	ft_printf("\t|%#08.0f|\t|%#08.0f|\t|%#08.0f|\n", z, fm, f);

	printf("%-8s|%.1f|\t\t|%.1f|\t\t|%.1f|\n", "%.1f", (double)0, 9.96, 2.95);
	ft_printf("\t|%.1f|\t\t|%.1f|\t\t|%.1f|\n", (double)0, 9.96, 2.95);
	printf("%-8s|%.2f|\t\t|%.2f|\t\t|%.2f|\n", "%.2f", (double)0, 9.969, 2.959);
	ft_printf("\t|%.2f|\t\t|%.2f|\t\t|%.2f|\n", (double)0, 9.969, 2.959);
	printf("%-8s|%.1f|\t\t|%.1f|\t\t|%.1f|\n", "%.1f", (double)0, 9.9, 2.9);
	ft_printf("\t|%.1f|\t\t|%.1f|\t\t|%.1f|\n",  (double)0, 9.9, 2.9);
	printf("%-8s|%.0f|\t\t|%.0f|\t\t|%.0f|\t\t|%.0f|\n", "%.0f", 0.5, 1.5, 2.5, 3.5);
	ft_printf("\t|%.0f|\t\t|%.0f|\t\t|%.0f|\t\t|%.0f|\n", 0.5, 1.5, 2.5, 3.5);

    printf("%-8s|%f|\t|%f|\t|%f|\t|%f|\t\t|%f|\n", "%f", (double)0, 100.5, 42.49, -42.5555, 10000.5000912);
    ft_printf("\t|%f|\t|%f|\t|%f|\t|%f|\t\t|%f|\n", (double)0, 100.5, 42.49, -42.5555, 10000.5000912);

	double aa = 0;
	printf("|%+03.0f|\n", aa);
	ft_printf("|%+03.0f|\n", aa);
	printf("|%+08.0f|\n", aa);
	ft_printf("|%+08.0f|\n", aa);
	printf("|%+-3.0f|\n", aa);
	ft_printf("|%+-3.0f|\n", aa);
	printf("|%+-8.0f|\n", aa);
	ft_printf("|%+-8.0f|\n", aa);
	printf("|%+8.0f|\n", aa);
	ft_printf("|%+8.0f|\n", aa);
	printf("|%+3.0f|\n", aa);
	ft_printf("|%+3.0f|\n", aa);
	printf("|% 8.0f|\n", aa);
	ft_printf("|% 8.0f|\n", aa);
	printf("|%#4.0f|\n", aa);
	ft_printf("|%#4.0f|\n", aa);
	printf("|%8.0f|\n", aa);
	ft_printf("|%8.0f|\n", aa);
	printf("|%+08.0f|\n", 100.1234);
	ft_printf("|%+08.0f|\n", 100.1234);
}

void	astro(void)
{
	printf("|%*d|\n", 5, 42);
	ft_printf("|%*d|\n", 5, 42);
	printf("|%*d|\n", -5, 42);
	ft_printf("|%*d|\n", -5, 42);
	printf("|%0*d|\n", 5, 42);
	ft_printf("|%0*d|\n", 5, 42);
	printf("|%.*d|\n", 5, 42);
	ft_printf("|%.*d|\n", 5, 42);
	printf("|%6.*d|\n", 4, 42);
	ft_printf("|%6.*d|\n", 4, 42);
	printf("|%*.4d|\n", 5, 42);
	ft_printf("|%*.4d|\n", 5, 42);
}

int main(void)
{
	// test_d();	//	all integers

// ---- individual integer flags (included in test_d)
	spacet();
	// widt();
	// plust();
	// prect();
	// zerot();
	// minust();
// ----

	// adrt();
	// strt();
	// octals();
	// hext();
	// unsigt();
	// chart();
	// percent();
	// floatt();

// 	bonus
	// printed();	// %n
	// astro();		// *
}