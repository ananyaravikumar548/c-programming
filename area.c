#include<stdio.h>
int area(int x,int y){
    return x*y;
}
int main(){
    int x=10;
    int y=20;
    int Area;
    Area=area(x,y);
    printf ("%d",Area);
}