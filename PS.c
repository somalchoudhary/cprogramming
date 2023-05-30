// Title of program
//Write a program to calculate the perimeter of square
// Header Files
#include<stdio.h>
// Start of main function
int main() {
	// variable Declaration
	float side, perimeter;
	// Output Statement (prompt)
	printf("Enter the side of square\n");
	//Input Statement
	scanf("%f", &side);
	// Assignment Statement (Logic Calculation)
	perimeter= 4*side;
	// Output Statement
	printf("Perimeter of this square= %f", perimeter);
	return 0;
}
