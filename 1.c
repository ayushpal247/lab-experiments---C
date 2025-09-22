#include <stdio.h>
 
int main() {
    int num;
    int pos = 0, neg = 0, zero = 0;
 
    printf("Enter numbers (enter 111 to stop):\n");
 
    while (1) {   
        scanf("%d", &num);
 
        if (num == 111)   
            break;
 
        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;
    }
 
    printf("Count of positive numbers = %d\n", pos);
    printf("Count of negative numbers = %d\n", neg);
    printf("Count of zeroes = %d\n", zero);
 
    return 0;
}