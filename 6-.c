#include <stdio.h>

int main() {
    int arr[100]; // Array declared with a maximum capacity of 100
    int size, i, element, position;

    // 1. Input the initial size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // 2. Input the elements of the array
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // 3. Display the original array
    printf("\nOriginal array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // 4. Get the element and position to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d) where you want to insert it: ", size + 1);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 1 || position > size + 1) {
        printf("Invalid position! Position should be between 1 and %d.\n", size + 1);
    } else {
        // 5. Shift elements to the right to create space
        // We start from the end of the array and move backward
        for (i = size; i >= position; i--) {
            arr[i] = arr[i - 1];
        }

        // 6. Insert the new element at the specified index
        // Since positions are 1-based (1, 2, 3...), the array index is (position - 1)
        arr[position - 1] = element;
        size++; // Increase the size of the array by 1

        // 7. Display the updated array
        printf("\nArray after insertion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
