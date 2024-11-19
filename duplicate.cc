
#include <stdio.h>

int main() {
     int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], duplicateCount = 0;

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n;i++){
        for(j=i+1; j<n;j++){
            if(arr[i]==arr[j]){
                duplicateCount++;
                break;
            }
        }
    }

    printf("Total number of duplicate elements: %d\n", duplicateCount);
    
   
    return 0;
}