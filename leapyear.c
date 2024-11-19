// Online C compiler to run C program online
#include <stdio.h>

int leapyear(int n) {
 
   if (n%400==0){
       return 1;
   }
   else if (n%100==0){
       return 0;
   }
  else  if (n%4==0){
       return 1;
   }
   else {
       return 0;
   }}
   
   
  int main(){
      int n=2005;
      if (leapyear(n)){
          printf ("it is leapyear");
      }
      else {
          printf ("it is not");
      }
      return 0;
  }
  









