// Online C compiler to run C program online
#include <stdio.h>

 int main(){
     char op;
     int a;
     int b;
     int res;
  printf ("choose an operator [+,-,*,%]=");
  scanf ("%c",&op);
  
  printf ("enter two numbers ");
  scanf ("%d %d",&a,&b);
  
  switch (op){
  case '+':
  res=a+b;
  break;
  case '-':
  res=a-b;
  break;
  case '*':
  res=a*b;
  break;
  case '%':
  res =a%b;
  break;
  default:
  printf ("invalid");}
 
  
  printf ("%d",res);
      return 0;
  }
  









