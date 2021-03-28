#include <stdio.h>
void main()
{
  int arr[3][3],i,j,m=0;
  int*p;
  
       printf("\n\nUSING POINTERS TO CALCULATE THE SUM OF DIAGONAL MATRIX :\n");
       printf("------------------------------------------------------\n");  
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",arr[i][j]);
  }
 printf("\n\n");
 p=arr;
 int sum = 0;

for(i = 0; i<3; i++)
{
 for(j= 0; j<3; j++)
  {
if(i == j)
{

sum += *(*(arr+i) + j);
}
}}
printf("\n\t The sum of diagonal is :%d",sum);
}
