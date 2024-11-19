#include <stdio.h>
#include <math.h>

// Function to count the number of digits 
// in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        ++count;
    }
    return count;
}

// Function to check if a number is an 
// Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int n = countDigits(num);
    int result = 0;

    while (num != 0) {
        int remainder = num % 10;
        result += pow(remainder, n);
        num /= 10;
    }

    return (result == originalNum);
}

int main() {
    int low = 100, high = 500; 
    printf("Armstrong numbers between %d and %d are: ", 
           low, high);

    // Iterate through each number in the interval
    for (int i = low + 1; i < high; ++i) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}