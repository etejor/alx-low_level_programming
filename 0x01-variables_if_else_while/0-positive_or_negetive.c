#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main
*
* Description: using the main function
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* code here */
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negetive\n", n);
}
return (0);
}
