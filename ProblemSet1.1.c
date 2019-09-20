/*Write a C program that declares `int`, `float`, and `char` variable. Initialize them to 2019, 0.23f, and 'm'. Print these variable values in reverse order using `printf()`*/

/*Preprocessor commands. These tell the compiler what to ‘include’. These include information about a 'standard' library*/
#include <stdio.h>
#include <stdlib.h>

/*Every C program has a main function. It receives no argument values. Hence the ().*/
int main ()
{
	int a = 2019; /* Define variable 'a' of integer data type inside the function. A variable is a like bucket that holds whatever value you throw inside */
	float b = 0.23f; /* Define variable 'b' of float data type */
	char c = 'c'; /* Define variable 'c' of character data type */

	printf("%c\n%f\n%d\n", c, b, a); // % indicates a placeholder. c for character, f for float, etc.,)
	return(0); // Output value of zero to signal the program ended succesfully //
}