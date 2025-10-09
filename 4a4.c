// Declare a static local variable inside a function. Observe how its value persists across function calls.
#include <stdio.h>
void counter(){
    static int count = 0; // Static local variable declaration
    count++;
    printf("Counter value: %d\n", count);
}
int main(){
    counter(); // First call
    counter(); // Second call
    counter(); // Third call
    return 0;
}