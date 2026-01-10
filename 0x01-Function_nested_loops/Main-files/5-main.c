#include "roadmap.h"

/**
*main - will call printSign to validate if the number is negative/positive
* and print a sign
*Return: will return 0 if success
*/

int main(void)
{
        int r; /* return value received */

        r = printSign(-10);
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
        _putchar('\n');
        r = printSign(10);
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
        _putchar('\n');
        r = printSign(0);
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
        _putchar('\n');
        r = printSign(-1024);
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
        _putchar('\n');
        r = printSign(0xff);
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
        _putchar('\n');
        r = printSign('0');
        _putchar(',');
        _putchar(' ');
        _putchar(r + '0');
        _putchar('\n');
        return (0);
}