#include <stdio.h>
/**
 * insertion_sort - sorts an array of numbers from lowest to highest using the insertion sorting algorithm
 * array[] -  array of intergers
 * @n: number of integers
*/

void insertion_sort(int array [], int n) {
    for (int i = 1; i < n; i++) {
        int current_element = array[i];
        int j = i - 1;

        while (j >= 0 && current_element < array[j]) {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = current_element;
    }
}

int main() {
    int array[] = {13, 21, 99, 7, 12, 15};
    int n = sizeof(array) / sizeof(array[0]);

    insertion_sort(array, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}