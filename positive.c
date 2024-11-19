// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=10;
    if(n<0){
        printf ("it is negative");
    }
    else if  (n>0){
        printf ("it is positive");
    }
    else if (n==0){
        printf ("neutral");
    }
    else 
    {
        printf ("invalid");
    }

    return 0;
}