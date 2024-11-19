// Online C compiler to run C program online
#include <stdio.h>
int SI(int pri,int time, int rate){
    int SI= (pri * time * rate )/100;
    return SI;
    
}

int main() {
    int pri= 400;
    int time =1;
    int rate = 10;
printf ("the simple interest is");
int result;
result = SI(pri,time,rate);
printf("%d",result);
    return 0;
}