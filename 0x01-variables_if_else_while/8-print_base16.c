#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all numbers of base 16 plus new line
 * Return: Always 0
 */
int main(void)
{
char x;

for (x = '0'; x <= '9'; ++x)
putchar(x);
for (x = 'a'; x <= 'f'; ++x)
putchar(x);

putchar('\n');

return (0);
}
