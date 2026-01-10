#include "roadmap.h"
/**
*main - will call checkAlpha() to validate given values
*Return: will return 0 if success
*/

int main(void)
{
        int r; /* return value received */

        r = checkAlpha('A');
        _putchar(r + '0');
        _putchar('\n');
        r = checkAlpha(5);
        _putchar(r + '0');
        _putchar('\n');
        r = checkAlpha(105);
        _putchar(r + '0');
        _putchar('\n');
        r = checkAlpha(0);
        _putchar(r + '0');
        _putchar('\n');
        r = checkAlpha('5');
        _putchar(r + '0');
        _putchar('\n');
        return (0);
}
