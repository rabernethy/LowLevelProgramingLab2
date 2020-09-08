/*
Author: Russell Abernethy
Date: 9/7/2020
Program Name: Lab2
*/

#include <stdio.h>

// function headers
int sum(int n);
double avg(int n);


int main() {
    int n;
    printf("Enter an int: ");
    scanf("%d", &n);

    printf("The sum of the first %d integers is %d\n", n, sum(n));
}

int sum(int n) {
// calculaters the sum of the first n integers.
    int i, sum = 0;
    for(i = 0; i <= n; i++)
        sum+=i;
    return sum;
}

double avg(int n) {
// calculates the average of the first n integers.

}