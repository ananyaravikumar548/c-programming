#include <stdio.h>

      int main( void) {
          int arr1[3];
          int i;
          printf ("enter elements");
          for(i=0;i<3;i++)
              scanf ("%d", &arr1[i]);
        
       int arr2[3];

          for (i=0;i<3;i++){
              arr2[i]= arr1[i];
          }
          printf("The first array is :");
          for (i = 0; i < 3; i++) {
              printf("%d ", arr1[i]); }
          
          
          printf("The second array is :");
          for (i = 0; i < 3; i++) {
              printf("%d ", arr2[i]); }
          
          
          
             return 0;
         }

   
  