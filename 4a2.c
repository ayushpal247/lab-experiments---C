//declare a local variable inside a function and try to acces it outside the function . compare this with accessing the global variable from within the function.
#include <stdio.h>
int globalVar = 20; // Global variable declaration
void testFunction() {
int localVar = 5;   //local variable declaration
    printf("Inside Function: localVar = %d\n", localVar);
    printf("Inside Function: globalVar = %d\n", globalVar);
}
int main() {
    testFunction();
    // The following line would cause an error because localVar is not accessible outside testFunction
    // printf("Outside Function: Local Variable = %d\n", localVar); // Uncommenting this line will cause a compilation error
    printf("Inside Function: globalVar=%d\n", globalVar);
    return 0;
}