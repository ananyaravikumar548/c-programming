// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int isprime(int n){

    for(int i=2;i<=sqrt (n);i++){
        if (n%i==0){
            return 0;
        }
    }
return 1;}
int main() {
int N=50;
int i;
for (i=1;i<=N;i++){
    if(isprime(i)){
     printf ("%d\n",i);
    }
}
    return 0;
}