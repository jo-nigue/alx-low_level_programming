#include<stdio.h>

/**
 *
 * main - prints hexadecimal
 *
 * Return: returns 0
 */
int main(void)
{
int num1, num2;
for (num1 = '0'; num1 <= '9'; num1++)
putchar(num1);
for (num2 = 'a'; num2 <= 'f'; num2++)
putchar(num2);
putchar('\n');
return (0);

}
