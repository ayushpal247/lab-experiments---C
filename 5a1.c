//WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.
#include <stdio.h>
int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0],secondLargest = -999999;
    for(i=1; i<n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
        printf("second largest element is: %d\n", secondLargest);
        return 0;
    }
