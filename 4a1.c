//declare a global variable outside all functions and use it inside various functions to understand its accessibility
#include <stdio.h>
int globalVar = 10; // Global variable declaration
void function1() {
    printf("Function 1: Global Variable = %d\n", globalVar);
}
void function2() {
    printf("Function 2: Global Variable = %d\n", globalVar);
}
int main() {
    printf("Main Function: Global Variable = %d\n", globalVar);
    function1();
    function2();
    return 0;
}