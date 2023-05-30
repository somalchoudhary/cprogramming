// Title of program
//Write a program to calculate the perimeter of rectangle
// Header Files
#include<stdio.h>
// Start of main function
int main() {
	// variable Declaration
	float length, breadth, perimeter;
	// Output Statement (prompt)
	printf("Enter the length and breadth of rectangle\n");
	//Input Statement
	scanf("%f%f", &length, &breadth);
	// Assignment Statement (Logic Calculation)
	perimeter= 2*(length+breadth);
	// Output Statement
	printf("Perimeter of this rectangle= %f", perimeter);
	return 0;
}
