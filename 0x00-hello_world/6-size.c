#include <stdio.h>

/**
 * main - prints the size of various data type
 * Retun: Always 0 (success)
 */

int main(void)
{
printf("Size of a char: %c byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %f byte(s)\n", sizeof(float));
return (0);
}
