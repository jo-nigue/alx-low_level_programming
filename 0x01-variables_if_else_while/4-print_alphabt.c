#include<stdio.h>
/**
 * main - prints all except q and e
 *
 * Return: Alwasy 0 if successful
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
continue;
else
putchar(ch);

}
putchar('\n');
return (0);
}
