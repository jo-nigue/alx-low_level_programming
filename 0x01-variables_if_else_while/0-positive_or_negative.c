#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - contains if else
 *
 * Return - Always 0 (Successful)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
