// Linear Search Program

// This program includes time complexity and space complexity calculations

#include <stdio.h>

int main()
 {
    // Declare variables
    int n, i, x, count = 0, time = 2, space;

    // Time complexity: Initialize variable count and time (2 operations)
    // Space complexity: 24 bytes (6 variables x 4 bytes each)

    // Prompt user for number of elements in the list
    printf("\nEnter the number of elements in the list: ");

    time++;// Increment time complexity for print operation

    // Get user input for number of elements
    scanf("%d", &n);

    time++; // Increment time complexity for scanf operation

    // Declare array to store elements
    int a[n]; 

    // Space complexity: Add 4 bytes for each element in the array
    space = 24 + (4 * n);

    // Prompt user to enter elements
    printf("\nEnter the elements:\n");

    time++; // Increment time complexity for print operation
    time++; // Increment time complexity for newline character

    // Get user input for elements
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        time++; // Increment time complexity for scanf operation
        time++; // Increment time complexity for loop iteration
    }

    // Prompt user to enter element to search for
    printf("\nEnter the element to search for: ");

    time++; // Increment time complexity for print operation

    // Get user input for element to search for
    scanf("%d", &x);

    time++; // Increment time complexity for scanf operation

    // Perform linear search
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
            printf("\nElement %d found at position %d", x, i + 1);
            time++; // Increment time complexity for print operation
            time++; // Increment time complexity for loop iteration
        }
        time++; // Increment time complexity for loop iteration
    }

    // Print search results
    if (count > 0) {
        printf("\nElement found %d times", count);
        time++; // Increment time complexity for print operation
        time++; // Increment time complexity for loop iteration
    } else {
        printf("Element not found");
        time++; // Increment time complexity for print operation
        time++; // Increment time complexity for loop iteration
    }

    // Print time and space complexity
    printf("\nTime complexity: %d", time);
    printf("\nSpace complexity: %d", space);

    return 0;
}