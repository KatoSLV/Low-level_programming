#include "roadmap.h"

/**
*main - will call checkLower to validate if a char is lower or not
*Return: will return 0 if success
*/

int main(void)
{
        int r; /* store return value */

        r = checkLower('R');
        _putchar(r + '0');
        _putchar('\n');
        r = checkLower('o');
        _putchar(r + '0');
        _putchar('\n');
        r = checkLower(108);
        _putchar(r + '0');
        _putchar('\n');
        r = checkLower(68);
        _putchar(r + '0');
        _putchar('\n');
        return (0);
}
