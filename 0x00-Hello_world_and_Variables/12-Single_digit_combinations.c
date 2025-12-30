#include <stdio.h>

/** 
* main - this program will print all posible combinations of single digit nums
* must separated by ',' followed by a space
* cannot have coma and space at the end only using "putchar"
*Return: will return 0
*/

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
