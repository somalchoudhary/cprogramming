#include<stdio.h>
int main()
{
 int a[10][10],i,j,rows,columns;
 printf("Enter the number of rows and columns");
 scanf("%d%d",&rows,&columns);
 printf("Enter elements");
 {
 for(i=0;i<columns;j++)
 {
  scanf("%d",&a[i][j]);
  }
  }
  for(i=0;i<rows;i++)
  {
  for(j=0;j<columns;j++)
  {
  printf("%d\t", a[i][j]);
  }
  printf("\n");
  }
  return 0;
  }
