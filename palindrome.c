
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

int palindrome(int n){
    if (n==0){
        return 0;
    }
    else {
        return n==reverseDigits(n);
    }
}
int main() 
{ 
int n= 238;
if (palindrome(n)){
    printf ("it is palindrome");
}
else{
    printf ("false");
}

	return 0; 
}










