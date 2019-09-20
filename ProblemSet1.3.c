/*Preprocessor commands. These tell the compiler what to ‘include’.*/
#include <stdio.h>
#include <stdlib.h>

/*Every C program has a main function*/
int main ()
{
	int count = 5; // No quotes gives the numeric value, quotes would give the symbol 5. //
	for (int i = 0; i < count; i++) // intiliaze i = 0; is it < than 'count'?; increase i //
	{
		printf("\t++++++++++\n");
	}
	
	return(0);
}

