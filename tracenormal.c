// C program to find trace 
// and normal of given matrix 
#include <math.h> 
#include <stdio.h> 

int findNormal(int mat[3][3], 
int n) 
{ 
int sum = 0; 
for (int i = 0; i < n; i++) 
for (int j = 0; j < n; j++) 
sum += mat[i][j] * mat[i][j]; 
return sqrt(sum); 
} 

int findTrace(int mat[3][3], int n) 
{ 
int sum = 0; 

for (int i = 0; i < n; i++) 
sum += mat[i][i]; 
return sum; 
} 

// Driven code 
int main() 
{ 
int mat[3][3] = {{1, 2, 3}, 
{4, 5, 6}, 
{7, 8, 9}}; 
printf("Normal of Matrix = %d", 
findNormal(mat, 3)); 
printf("\nTrace of Matrix = %d", 
findTrace(mat, 3)); 
return 0; 
}