// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a=7;
   int b=5;
   int c=3;
  int largest=a;
   if (b>largest){
      largest=b;
  }
 if (c >largest){
    largest=c;
}
printf ("%d",largest);
    return 0;
}