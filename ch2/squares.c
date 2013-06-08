/* 	squares.c
	By Aseem Kohli
	Exercise #5
	This program calculates and displays the squares of the 
	first 10 integers.  
*/

#include <stdio.h>
#include <stdlib.h>

#define _DEBUG 0
#define NUM_INTS 10

int main(int argc, const char *argv[])
{
	int counter = 0;
	int numBytesNeeded = sizeof(unsigned int) * NUM_INTS;
	unsigned int *nums = (unsigned int *) malloc(numBytesNeeded);
	unsigned int *iterator = nums;
	
	for (counter = 1; counter <= NUM_INTS; counter++)
	{
		*iterator = counter * counter;
		printf ("%d\n", *iterator);
		iterator++;
	}
	
	free (nums);
	nums = NULL;
}