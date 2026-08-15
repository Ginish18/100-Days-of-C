//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
#include <math.h>

int main() {
    
	int a, b, c;
	int si, ci;
	int sum, multiplication, division;
	
	printf("principal, rate and time: ");
    scanf("%d %d %d", &a, &b, &c);
	
	si = (a * b * c) / 100;
	ci = a * pow((1 + b / 100), c);
	
	printf("si = %d\n", si);
	printf("ci = %d\n", ci);
	
	return 0;
}
	
	
