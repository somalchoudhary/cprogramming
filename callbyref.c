#include<stdio.h>
int swap(int*,int*);
int main()
{
 int x,y;
 printf("\nEnter the value of x and y ");
 scanf("%d%d", &x,&y);
 printf("Before swapping of x is %d and y is %d", x ,y);
 swap(&x,&y);
 printf("\nAfter swapping of x is %d and y is %d",x,y);
 return 0;
 }
 int swap(int*a,int*b)
 {
  int temp;
  temp=*b;
  *b=*a;
  *a=temp;
}
