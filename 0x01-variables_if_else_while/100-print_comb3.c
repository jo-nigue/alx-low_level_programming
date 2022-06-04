#include<stdio.h>
/**
 * main - prints two digit combination
 *
 * Return: 0 if successful
 */
int main (void)
{
int num, num1;
for (num = '0'; num <= '9'; num++)
{
for (num1 = '0'; num1 <= '9'; num1++)
{
if (num1 > num)
{
putchar (num);
putchar (num1);
putchar (',');
putchar (' ');
}
else
continue;
}
}
putchar ('\n');
return (0);
}
