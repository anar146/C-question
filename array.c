arr[5] = {45, 67, 37, 39, 50} these are 5 array find the maximum array 

#include <stdio.h>

int main() 
{
    int arr[] = {45, 67, 37, 39, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Max element: %d\n", max);
    return 0;
}
