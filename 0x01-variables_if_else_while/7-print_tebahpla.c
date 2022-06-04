#include<stdio.h>
/**
 * main - prints alphabts backwards
 *
 * Return: 0 if successful
 */
int main(void)
{
int ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
