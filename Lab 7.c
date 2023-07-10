#include <stdio.h>

void bubbleSort(int a[], int len, int* count)
{
    for (int i = 0; i < len; i++)
    {
        int swapcount = 0;
        for (int j = 0; j < (len - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                (*count)++;
                swapcount++;
            }
        }
        printf("%d\n", swapcount);
    }
}

int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int swapCount = 0;

    printf("Original Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    bubbleSort(arr, n, &swapCount);

    printf("\nSorted Array: ");
    for (int i = 0; i < n; i++)
        printf("a[%d] = %d\n", i, arr[i]);

    printf("The number of swaps needed to sort were: %d\n", swapCount);

    return 0;
}