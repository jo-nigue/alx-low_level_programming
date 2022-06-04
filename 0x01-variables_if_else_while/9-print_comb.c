#include<stdio.h>
/**
 * main - prints 0-9
 *
 * Return: 0 if successful
 */
int main(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
putchar (num);
if  (num < '9')
{ 	
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
