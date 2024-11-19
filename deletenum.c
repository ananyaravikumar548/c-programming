#include <stdio.h>

int main()
{
    int array[50], position, i, n, value;
     printf("Enter number of elements in the array\n");
    scanf("%d", &n);
    
    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++)    
        scanf("%d", &array[i]);
    
    printf("Please enter the location where you want to delete an new element\n");
    scanf("%d", &position);
    
      if ( position >= n+1 )    
    printf("Deletion not possible.\n");
    
    else
    {    
        for ( i = position - 1 ; i < n - 1 ; i++ ) 
        array[i] = array[i+1];        
        
        printf("Resultant array is\n");
        
        for( i = 0 ; i < n - 1 ; i++ )        
        printf("%d\n", array[i]);        
    }    
    
    
    
    return 0;
    
    
    
    
    
    
    
}