#ifndef ROADMAP_H
#define ROADMAP_H

#include <stdio.h>

int _putchar (int c);

int isUpper(char c); /* Checks for uppercase*/

int isDigit(char); /* Checks for digits */

int mul(int, int); /* multiplies two integers */

int printNumbers(void); /* Print numbers from 0-9 */

int printMostNumbers(void); /* Print numbers without 2 and 4*/

int printMoreNumbers(void); /* Print ten times the numbers from 0-14 */

void printLine(int); /* Print a straight line in the terminal using "-" */

void printDiagonal(int); /* Print a diagonal line by N time using "\" */

void printSquare(int); /* Print a square using "#" */

void printFizzBuzz(void); /* prints numbers but the multiples are altered */

void printTriangle(int); /* Print a triangle using "#" */

#endif
