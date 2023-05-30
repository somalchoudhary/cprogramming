// Title of program
//Write a program to calculate the area of rectangle
// Header Files
#include<stdio.h>
// Start of main function
int main() {
	// variable Declaration
	float length, breadth, area;
	// Output Statement (prompt)
	printf("Enter the length and breadth of rectangle\n");
	//Input Statement
	scanf("%f%f", &length, &breadth);
	// Assignment Statement (Logic Calculation)
	area= length*breadth;
	// Output Statement
	printf("Area of this rectangle= %f", area);
	return 0;
}
