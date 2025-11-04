/*Develop a recursive function FIBO (num) that accepts an integer argument. 
Write a C program that invokes this function to generate the Fibonacci sequence up to num.*/
#include <stdio.h>
int recursive_fibo(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return recursive_fibo(n - 1) + recursive_fibo(n - 2);
}
int main() {
    int num;
    printf("Enter an integer to generate Fibonacci sequence up to that number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Fibonacci sequence up to %d:\n", num);
    for (int i = 0; ; i++) {
        int fibo_value = recursive_fibo(i);
        if (fibo_value > num)
            break;
        printf("%d ", fibo_value);
    }
    printf("\n");

    return 0;
}