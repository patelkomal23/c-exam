// Write a  c program to find cube  of each elements of an 1D  array using pointer

#include <stdio.h>
void cubs(int *arr, int size) {
	int i;
    for (i = 0; i < size; i++) {
        *(arr + i) = *(arr + i) * *(arr + i) * *(arr + i);
    }
}

main() {
	int i;
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
     printf("\n");

    cubs(arr, size);

    printf("Array after cubing each element: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
