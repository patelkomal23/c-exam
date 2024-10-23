//write a c program to find the sum of element in a array using a function.
#include <stdio.h>

int Sum(int arr[], int size) {
    int i, sum = 0;
     for (i = 0; i < size; i++) {
        sum =sum + arr[i];
    }
    return sum;
}

 main() {
 	int i;
    int arr[] = {1, 2, 3, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int sum = Sum(arr, size);
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
