//write a c program that  defines a function to print a reverse 1D 
//array element and print sum of all element

#include <stdio.h>

void rev(int arr[], int size) {
	int i;
    for ( i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int Sum(int arr[], int size) {
    int sum = 0;
    int i;
    for ( i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
	int i;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Reversed array: ");
   rev(arr, size);

    int sum = Sum(arr, size);
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
