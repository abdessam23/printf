
#include<limits.h>
#include "printf.h"
#include <stdio.h>
#include <stdarg.h>

int main() {

    int len_1;
    int len_2;
    len_1 = printf("Expected output:    %%%%%%\n");
	len_2 = ft_printf("Current output:     %%%%%%\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);


    return 0;
}
