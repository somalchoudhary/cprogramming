//Program to Store Information of a student and Display it using union
#include <stdio.h>
//Defining a union
union student {
    int roll;
    float marks;
} s; //Declaring union variable s with union definition

int main() {
    // To Store Information using union
    printf("Enter information:\n");
    printf("Enter roll number: ");
    //s is a variable of Student type and roll is a member of Student
    scanf("%d", &s.roll); //Accessing Union Members
    printf("Enter marks: ");
    //s is a variable of Student type and marks is a member of Student
    scanf("%f", &s.marks); //Accessing Union Members
    // To display Information using Union
    printf("Displaying Information:\n");
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.4f\n", s.marks);
    return 0;
}
