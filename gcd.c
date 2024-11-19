// Online C compiler to run C program online
#include <stdio.h>
int gcd(int x,int y){
  if (y!=0){
       return gcd (y,x%y);}
   
   }
 int main(){
   int x=5;
   int y=16;
  int  result;
  result= gcd(x,y);
  printf ("%d",result);
      return 0;
  }
  









