// Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.
#include <stdio.h>
int main(){
    if(1){
        int blockVar =50;
        printf("inside block: blockVar=%d\n",blockVar);
    }
    // The following line would cause an error because blockVar is not accessible outside the if block
    // printf("outside block: blockVar=%d\n",blockVar); // Uncommenting this line will cause a compilation error
    return 0;
}