#include "main.h"
#include <stdio.h>

int main(void)
{
	_printf("Should print a single percent sign: %%\n");
	_printf("%s%c%c%c%s%%%s%c", "Loading", '.', '.', '.', "99", "please", "wait", '\n');
/*	printf("%!\n");*/
	return 0;
}
