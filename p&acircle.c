#include<stdio.h>
#define PI 3.14
int main() {
    float rad,perm,area;
    printf("Enter the radius of circle:");
    scanf("%f",rad);
    perm = 2*PI*rad;
    printf("Perimeter of circle:%f\n",perm);
    area = PI*rad*rad;
    printf("area of circle:%f\n",area);
    return 0;
     }
