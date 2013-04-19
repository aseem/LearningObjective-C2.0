/* 	fib.c
	By Aseem Kohli
	Exercise #10,11
	This file defines a struct for a rectangle.  
*/

#include <stdio.h>
#include <stdbool.h>

#define _DEBUG 0

struct point
{
	int x;
	int y;
};

struct size
{
	int length;
	int width;
};

struct rect
{
	struct point lowerLeftCorner;
	struct size rectangleDimensions;
};

bool compareRectangles (struct rect rect1, struct rect rect2)
{
	int r1[4];
	int r2[4];
	
	r1[0] = rect1.lowerLeftCorner.x;
	r1[1] = rect1.lowerLeftCorner.x + rect1.rectangleDimensions.width;
	r1[2] = rect1.lowerLeftCorner.y;
	r1[3] = rect1.lowerLeftCorner.y + rect1.rectangleDimensions.length;
	
	if (_DEBUG)
		printf("DEBUG rect1: %d %d %d %d\n", r1[0], r1[1], r1[2], r1[3]);
	
	r2[0] = rect2.lowerLeftCorner.x;
	r2[1] = rect2.lowerLeftCorner.x + rect2.rectangleDimensions.width;
	r2[2] = rect2.lowerLeftCorner.y;
	r2[3] = rect2.lowerLeftCorner.y + rect2.rectangleDimensions.length;
	
	if (_DEBUG)
		printf("DEBUG rect2: %d %d %d %d\n", r2[0], r2[1], r2[2], r2[3]);
	
	if (r1[0] > r2[1] || r1[1] < r2[0] || r1[2] > r2[3] || r1[3] < r2[2])
		return false;
	else
		return true;
}

int main(int argc, const char *argv[])
{
	struct rect r1, r2, r3, r4, r5;
	
	r1.lowerLeftCorner.x = 1;
	r1.lowerLeftCorner.y = 1;
	r1.rectangleDimensions.length = 2;
	r1.rectangleDimensions.width = 3;
	
	r2.lowerLeftCorner.x = -4;
	r2.lowerLeftCorner.y = 1;
	r2.rectangleDimensions.length = 2;
	r2.rectangleDimensions.width = 3;
	
	r3.lowerLeftCorner.x = -4;
	r3.lowerLeftCorner.y = -3;
	r3.rectangleDimensions.length = 2;
	r3.rectangleDimensions.width = 3;
	
	r4.lowerLeftCorner.x = 1;
	r4.lowerLeftCorner.y = -3;
	r4.rectangleDimensions.length = 2;
	r4.rectangleDimensions.width = 3;
	
	r5.lowerLeftCorner.x = 2;
	r5.lowerLeftCorner.y = 2;
	r5.rectangleDimensions.length = 1;
	r5.rectangleDimensions.width = 1;
	
	if (!compareRectangles(r1,r2))
		printf("Test Passed\n");
	else
		printf("Test Failed\n");
	
	if (!compareRectangles(r2,r1))
		printf("Test Passed\n");
	else
		printf("Test Failed\n");
	
	if (!compareRectangles(r1,r3))
		printf("Test Passed\n");
	else
		printf("Test Failed\n");
		
	if (!compareRectangles(r4,r1))
		printf("Test Passed\n");
	else
		printf("Test Failed\n");
		
	if (!compareRectangles(r2,r3))
		printf("Test Passed\n");
	else
		printf("Test Failed\n");
	
	if (!compareRectangles(r3,r4))
		printf("Test Passed\n");
	else
		printf("Test Failed\n");		
	
	if (compareRectangles(r1,r5))
		printf("Test Passed\n");
	else
		printf("Test Failed\n");
		
	if (compareRectangles(r5,r1))
		printf("Test Passed\n");
	else
		printf("Test Failed\n");
	
	return 0;
}


