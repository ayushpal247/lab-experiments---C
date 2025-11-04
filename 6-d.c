/*  Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise.
 Write a C program that invokes this function to generate prime numbers between the given ranges.*/
#include <stdio.h>
int is_prime(int num, int divisor) {
    if (num < 2)
        return 0;
    if (divisor * divisor > num)
        return 1;
    if (num % divisor == 0)
        return 0;
    return is_prime(num, divisor + 1);
}
int main() {
    int lower, upper;
    printf("Enter the lower and upper range to find prime numbers: ");
    scanf("%d %d", &lower, &upper);

    if (lower > upper || lower < 0) {
        printf("Invalid range. Ensure that lower <= upper and both are non-negative.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (int num = lower; num <= upper; num++) {
        if (is_prime(num, 2)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
