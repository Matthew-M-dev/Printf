#include "main.h"
#include <stdio.h>

int main(void)
{
	_printf("Let's print a simple sentence.\n");
	_printf("%c\n", 'S');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	 _printf("%s", "This sentence is retrieved from va_args!\n");
	 _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf(NULL);
	 _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	return (0);
}
