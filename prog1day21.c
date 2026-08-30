//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int num, first, last, digits = 0;
    int middle, power = 1, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    int temp = num;
    while (temp >= 10) {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;
    digits = power;

    middle = (num % power) / 10;

    result = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit = %d", result);

    return 0;
}

