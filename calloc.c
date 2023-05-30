#include <stdio.h>
#include <stdlib.h>
int main()
{
int *ptr;
/* use calloc() function to define the no. of blocks and size of each blocks. */
ptr = calloc (4, sizeof(int)); // here 4 is the no. of block and int is the size of block
if (ptr != NULL)
{
printf (" Memory is created successfully \n");
}
else
printf (" Memory is not created ");
return 0;
}
