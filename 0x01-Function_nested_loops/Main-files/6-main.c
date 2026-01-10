#include "roadmap.h"

/**
*main - will call absVal() to validate a number and return the abs
*Return: will return 0 if success
*/

int main(void)
{
        int r; /* return value received */

        r = absVal(98);
        printf("%d\n", r);
        r = absVal(-32);
        printf("%d\n", r);
        r = absVal(1024);
        printf("%d\n", r);
        r = absVal(-1024);
        printf("%d\n", r);

        return (0);
}
