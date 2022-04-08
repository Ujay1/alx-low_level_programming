#include <stdio.h>
/**
 * main - Entry point
 * Size of various data type
 * Return: Always 0 (success)
 */
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

fprintf(stderr, "size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
fprintf(stderr, "size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
fprintf(stderr, "size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
fprintf(stderr, "size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
fprintf(stderr, "size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
