#include<stdio.h>
/**
 * main - prints both lower and upper case of the alphabets
 *
 * Return: always 0 if succesful
 */
int main(void)
{
char ch = 'a';
char CH = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (CH <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');
return (0);
}
