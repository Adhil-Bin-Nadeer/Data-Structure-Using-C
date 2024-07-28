// Binary Search

// Include the standard input/output library
#include <stdio.h>

// Main function where the program starts execution
int main()
{
    // Initialize variables
    int left = 0;  // Left index of the array
    int n;         // Number of elements in the array
    int x;         // Element to be searched
    int flag = 0;  // Flag to indicate if the element is found (0 = not found, 1 = found)
    int time = 3;  // Time complexity counter (initialized to 3 for the first 3 operations)
    int mid;       // Middle index of the array
    int i;         // Loop counter
    int space;     // Space complexity counter
    int temp;      // Temporary variable for swapping elements
    int j;         // Loop counter

    // Prompt the user to enter the number of elements in the list
    printf("\n Enter the number of elements in the list: ");
    time++;  // Increment time complexity counter for printf operation

    // Read the number of elements from the user
    scanf("%d", &n);
    time++;  // Increment time complexity counter for scanf operation

    // Prompt the user to enter the elements
    printf("\n Enter the elements \n");
    time++;  // Increment time complexity counter for printf operation

    // Declare an array to store the elements
    int a[n];
    int right = n - 1;  // Right index of the array
    time++;  // Increment time complexity counter for array declaration
    time++;  // Increment time complexity counter for right index calculation

    // Read the elements from the user
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        time++;  // Increment time complexity counter for scanf operation
        time++;  // Increment time complexity counter for loop iteration
    }

    // Bubble sort algorithm to sort the array in ascending order
    time++;  // Increment time complexity counter for loop initialization
    for (i = 0; i < n; i++) 
    {
        time++;  // Increment time complexity counter for loop iteration
        for (j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    // Swap elements if they are in the wrong order
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    time++;  // Increment time complexity counter for swap operation
                    time++;  // Increment time complexity counter for swap operation
                    time++;  // Increment time complexity counter for swap operation
                    time++;  // Increment time complexity counter for swap operation
                }
                time++;  // Increment time complexity counter for loop iteration
            }
            time++;  // Increment time complexity counter for loop iteration
     }

    // Print the sorted array
    time++;  // Increment time complexity counter for printf operation
    printf("\nSorted List : ");
    time++;  // Increment time complexity counter for printf operation
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
        time++;  // Increment time complexity counter for printf operation
        time++;  // Increment time complexity counter for loop iteration
    }

    // Prompt the user to enter the element to be searched
    printf("\n Enter the element to be searched: ");
    time++;  // Increment time complexity counter for printf operation

    // Read the element to be searched from the user
    scanf("%d", &x);
    time++;  // Increment time complexity counter for scanf operation
    time++;  // Increment time complexity counter for scanf operation

    // Binary search algorithm to find the element in the sorted array
    while (left <= right)
    {
        mid = (left + right) / 2;  // Calculate the middle index

        // Check if the element is found
        if (x == a[mid])
        {
            flag = 1;  // Set the flag to indicate that the element is found
            break;     // Exit the loop
            time++;  // Increment time complexity counter for comparison operation
            time++;  // Increment time complexity counter for loop exit
        }

        // If the element is greater than the middle element, move to the right half
        else if (x > a[mid]) 
        {
            left = mid + 1;  // Update the left index
            time++;  // Increment time complexity counter for comparison operation
            time++;  // Increment time complexity counter for index update
        }

        // If the element is less than the middle element, move to the left half
        else if (x < a[mid])
        {
            right = mid - 1;  // Update the right index
            time++;  // Increment time complexity counter
            time++;  // Increment time complexity counter
        }

        time++;  // Increment time complexity counter
        time++;  // Increment time complexity counter
    }

    // Check if the element is found
    if (flag == 0) 
    {
        printf("\n The %d is not found", x);  // Print a message indicating that the element is not found
        time++;  // Increment time complexity counter
        time++;  // Increment time complexity counter
    }
    else 
    {
        printf("\n The %d is found at %d position", x, mid + 1);  // Print a message indicating that the element is found
        time++;  // Increment time complexity counter
        time++;  // Increment time complexity counter
    }

    // Calculate the space complexity
    space = 32 + (4 * n);
    time++;  // Increment time complexity counter
    time++;  // Increment time complexity counter
    time++;  // Increment time complexity counter

    // Print the space and time complexities
    printf("\n The space complexity of the program: %d", space);
    printf("\n The time complexity of the program: %d", time);

    return 0;  // Return 0 to indicate successful execution
}
