#include <stdio.h> 
int factors(int n){
int i;
    for(i=1;i<=n;i++){
        if (n%i==0)
            printf ("%d\n",i);
        
    }
}
int main() 
{ 
int n=100;
 factors (n);
	return 0; 
}


