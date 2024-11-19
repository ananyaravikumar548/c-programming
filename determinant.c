#include<stdio.h>

int main()
{
  int i,j;
  int arr[2][2];
  printf ("enter the elements of first array");
      for(i=0;i<2;i++){
          for (j=0;j<2;j++){
               scanf("%d",&arr[i][j]);
                 printf (" \t %d", arr[i][j]);
               
          }
         printf (" \n");
      }
  int det;
  det =  arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0];
  printf ("%d",det);

return 0;
}