/* 	fib.c
	By Aseem Kohli
	Exercise #5
	This program outputs the first n fibonacci numbers.
	For information on fibonacci numbers, see 
	http://en.wikipedia.org/wiki/Fibonacci_number
*/

#include <stdio.h>

#define FIB_NUMBERS 20

int fib(int x);

int main(int argc, const char *argv[])
{
	int fib_num, i;
	fib_num = 0;
	
	for (i = 0; i < FIB_NUMBERS; i++)
	{
		fib_num = fib(i);
		printf("Fibonacci #%d is %d\n", i+1, fib_num);
	}
	
	return 0;
}

int fib(int x)
{
	if (x == 0)
	{
		return 0;
	}
	
	if (x == 1)
	{
		return 1;
	}
		
	return (fib(x-1) + fib(x-2));
	
}
