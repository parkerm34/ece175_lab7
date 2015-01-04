/*	Author: Parker Mathewson
 *	Date: 3/21/12
 *	Comment: This program is to print out the address and data in an array.
 *			This will also print out the minimum value within the array.
 */

#include <stdio.h>
#define ARRAY_SIZE 10

void pointer_min(int *min, int *random_number_set, int size)
{
	int i=0;

	for(i=0; i<size; i++)
	{
		if(*min >= random_number_set[i])
			*min = *(random_number_set+i);
	}
}

void print_function(int *random_number_set, int *min, int size)		//This is to print out all the requested lines.
{
	int i=0;

	for(i=0; i<size; i++)
		printf("random_number_set[%d] is at %p and equals %d\n", i, &random_number_set[i], random_number_set[i]);

	printf("min: %d, min pointer contains address: %p\n", *min, min);
}

int main(void)
{
	int random_number_set[]={7, 1, 3, 0, -2, 4, -3, 8, 9, 5};
	int *min;

	*min = random_number_set[0];

	pointer_min(min, random_number_set, ARRAY_SIZE);
	print_function(random_number_set, min, ARRAY_SIZE);

	return(0);
}
