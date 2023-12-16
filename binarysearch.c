// bubble sort

#include <stdio.h>
#include <conio.h>

void bubbleSort(int arr[], int n) {
    int i,j,temp;
    int swapped;

    for (i = 0; i < n - 1; i++) {
	swapped = 0; // Flag to check if any swaps were made in this pass
	for (j = 0; j < n - i - 1; j++) {
	    if (arr[j] > arr[j + 1]) {
		// Swap arr[j] and arr[j+1]
		temp = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = temp;
		swapped = 1; // Set the flag to indicate a swap was made
	    }
	}
	// If no two elements were swapped in inner loop, the array is already sorted
	if (swapped == 0) {
	    break;
	}
    }
}

int main() {
    int n,i;
    int arr[20];

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    clrscr();


    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
    }

    // Sort the array using Bubble Sort
    bubbleSort(arr, n);

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
    {
	printf("%d ", arr[i]);
    }
    getch();
    return 0;
}