//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>

int main() {
	
	int n, digit, original, sum = 0;
	
	printf("Enter a number: ");
    scanf("%d", &n);
	
	while (n > 0) {
		digit = n % 10;
		sum = sum + digit * digit * digit;
		n = n / 10;
	}
	
	if (sum == original) {
		printf("armstrong number");
	}
	else {
		printf("not armstrong number");
	}
	
	return 0;
}