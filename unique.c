#include <stdio.h>

      int main( void) {
          int i, j,k;
        int arr[3], uniqueCount = 0;

             printf("Enter the elements:\n");
             for(i = 0; i < 3; i++) {
                 scanf("%d", &arr[i]);
             }
          
          printf("\nThe unique elements found in the array are: \n");
              for (i = 0; i < 3; i++)
              {
                  uniqueCount= 0;
                  for (j = 0, k = 3; j <=3; j++)
                  {
                      if (i != j)
                      {
                          if (arr[i] == arr[j])
                          {
                              uniqueCount++;
                          }
                      }
                  }
                  if (uniqueCount == 0)
                  {
                      printf("%d ", arr[i]);
                  }
              }
         return 0;
        }
          
           
   
  