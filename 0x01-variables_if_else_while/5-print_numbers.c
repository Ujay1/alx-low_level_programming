#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print single digit numbers of base 10
 * Return: Always 0
 */
int main(void)
{
char i;

for (i = '0'; i <= '9'; ++i)
putchar(i);

putchar('\n');

return (0);
}
