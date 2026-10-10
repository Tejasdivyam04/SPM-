#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], max_pos = 0;
    int min = arr[0], min_pos = 0;

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_pos = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_pos = i;
        }
    }

    printf("\nLargest element: %d at index %d\n", max, max_pos);
    printf("Smallest element: %d at index ", min, min_pos);

    return 0;
}