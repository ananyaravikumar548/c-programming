
#include <stdio.h> 
int main() 
{ 
    int i , j;
int arr[2][2];
printf ("matrix a=");
for (i=0;i<2;i++){
    for(j=0;j<2;j++){
  
        scanf ("%d",&arr[i][j]);
         printf (" %d",arr[i][j]);
    }
 printf("\n");
}

int arr2[2][2];
printf ("matrix b=");
for (i=0;i<2;i++){
    for(j=0;j<2;j++){
  
        scanf ("%d",&arr2[i][j]);
         printf (" %d",arr2[i][j]);
    }
 printf("\n");
}

 
int arr3[2][2];
for (i=0;i<2;i++){
    for(j=0;j<2;j++){
  arr3[i][j]=arr[i][j]+arr2[i][j];
       }
}

printf ("matrix sum\n=");
for (i=0;i<2;i++){
    for(j=0;j<2;j++){
  
    printf ("%d\t",arr3[i][j]);
    }
 printf("\n");
}


	return 0; 
}










