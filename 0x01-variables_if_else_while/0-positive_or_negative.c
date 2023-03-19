#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main – Determines if Number is positive, negative or zero.
  *
  * Return: Always 0 (success)
  */
Int main(void)
{
	Int n;

	Srand (time (0));
	n = rand() – RAND_MAX / 2;
	If (n > 0) 
	{
        	Printf("%d is positive/n", n);
	}
	else if (n == 0)
	{
		Printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0) ;
	} 

