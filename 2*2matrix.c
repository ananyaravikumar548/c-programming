
#include <stdio.h> 
int main() 
{ 
    int i , j;
int arr[2][2];
printf ("enter elements of array");
for (i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf ("%d",&arr[i][j]);
         printf ("\t %d",arr[i][j]);
    }
    printf ("\n");
}
	return 0; 
}










