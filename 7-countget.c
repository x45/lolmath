#include <stdio.h>

void main(void)
{
	double nc;

	for (nc = 0; getchar() != EOF ; ++nc)
		;
	printf("%.0f\n",nc);

}
