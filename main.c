#include "ft_printf.h"

int main()
{
	int  p = ft_printf("%pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
	printf("\n%d\n",p);
	int t=printf("%pp%p%p", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
	printf("\n%d\n",t);

}
