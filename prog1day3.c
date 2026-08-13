//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main() {
	
	int a;
	int fahrenheit;
	
	printf("enter the celsius:");
	scanf("%d", &a);
	
	fahrenheit = 32 + (a * 1.8);
	
	printf("fahrenheit = %d\n", fahrenheit);
	
	return 0;
}
	
	
