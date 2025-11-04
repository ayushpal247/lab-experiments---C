/*Develop a function REVERSE (str) that accepts a string argument. 
Write a C program that invokes this function to find the reverse of a given string.*/
#include <stdio.h>
#include <string.h>
void reverse_string(char str[], int start, int end) {
    if (start >= end)
        return;

    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call for the next pair
    reverse_string(str, start + 1, end - 1);
}
int main() {
    char str[100];
    printf("Enter a string to reverse: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    int length = strlen(str);
    reverse_string(str, 0, length - 1);

    printf("Reversed string: %s\n", str);
    return 0;
}
