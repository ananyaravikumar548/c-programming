// Online C compiler to run C program online
#include <stdio.h>
int gcd(int x,int y){
  if (y!=0){
       return gcd (y,x%y);}
   
   }
   int lcm (int x,int y){
       if(x!=0){
           return (x/gcd(x,y))*y;
       }
   }
 int main(){
   int x=5;
   int y=10;
  int  result,result1;
  result= gcd(x,y);
 result1=lcm(x,y);
 printf ("%d",result1);
      return 0;
  }
  









