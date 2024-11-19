// Online C compiler to run C program online
#include <stdio.h>

 int main(){
   int n1=0;
   int n2=1;
   int nexterm;
   printf ("fibonacii series= %d %d\n", n1,n2);
   for(int i=3;i<=10;i++){
       nexterm=n1+n2;
       n1=n2;
       n2=nexterm;
       printf ("%d\n",nexterm);
   }
      return 0;
  }
  









