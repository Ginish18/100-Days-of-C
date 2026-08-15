//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>
#include <math.h>

int main() {
    
	int seconds;
	int hours, minutes, remaining;
	
	printf("enter the seconds:");
    scanf("%d", &seconds);
	
	hours = seconds / 3600;
	remaining = seconds % 3600;
    minutes = remaining / 60;
    seconds = remaining % 60;
	
	printf("%d:%d:%d", hours, minutes, seconds);
	
	return 0;
}
	
	
