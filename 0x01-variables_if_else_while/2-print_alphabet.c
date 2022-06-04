#include<stdio.h>
/**
 * main - prints alphabet
 *
 * Return: Alwasy 0 if successful
 */
int main(void)
{
char alphabet = 'a';
while( alphabet <= 'z' )

{
putchar( alphabet );
alphabet++;
}
putchar( '\n' );
return (0);
}
