#include "roadmap.h"

/**
*main - will call addInt for the addition of two integers
*Return: will return 0 if success
*/

int main(void)
{
        int r; /* Return value received */

        r = addInt(5, 10);
        printf("%d\n", r);
        r = addInt(5, 25);
        printf("%d\n", r);
        r = addInt(98, -20);
        printf("%d\n", r);
        r = addInt(-30, -50);
        printf("%d\n", r);
        return (0);
}
