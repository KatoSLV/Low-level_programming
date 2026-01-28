#ifndef ROADMAP_H
#define ROADMAP_H

#include <stdio.h>

int _putchar(char c); /* print a single character */

int strLen(char *str); /* return the len of a string*/

char *strCat(char *dest, char *src); /* Will concatenates two strings into one*/

char *strNCat(char *dest, char *src, int n); /* Will concatenates and return bytes of a string */

char *strNCpy(char *dest, char *src, int n); /* Will copy n bytes of a string and fills with '\0' till the end of bytes*/

int strCmp(char *str1, char *str2); /* Will compare two strings */

void revArr(int *array, int n); /* Reverses the content of an array of integers */

char *strToUpper(char *str); /* Will changes all lowercase letters of a string to uppercase */

char *capStr(char *str); /* Will capitalizes a string */

char *lEEt(char *str); /* Encode the string in 1337 */

char *rot13(char *str); /* Enconde the string in rot13 */

#endif
