#include<stdio.h>
void main() {
     int dividend, divisor;
     float remainder;
     printf("Enter dividend:");
     scanf("%d",&dividend);
     printf("Enter divisor:");
     scanf("%d",&divisor);
     remainder = dividend%divisor;
     printf("%d%%d=%f", dividend,divisor,remainder);
     }
