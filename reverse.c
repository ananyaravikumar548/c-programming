
#include <stdio.h> 
int reverseDigits(int n) 
{ 
	int revnum = 0; 
	while (n > 0) { 
		revnum = revnum * 10 + n % 10; 
		n = n / 10; 
	} 
	return revnum; 
} 
int main() 
{ 
	int n = 4568; 
	printf("Reverse of is %d", reverseDigits(n)); 


	return 0; 
}










