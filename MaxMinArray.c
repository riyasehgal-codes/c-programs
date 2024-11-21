#include <stdio.h>
int max(int arr[], int size);
int min(int arr[], int size);

int main()
{
    int arr[] = {23, 45, 67, 3565, 45, 2};
    int size = 6;
    printf(" MINIMUM ELEMENT : %d \n", min(arr, size));
    printf(" MAXIMUM ELEMENT: %d", max(arr, size));
}

int max(int arr[], int size)
{
    int max;
    for (int i = 1; i < size; i++)
    {

        if (arr[i] > +arr[i - 1])
        {
            max = arr[i];
        }
        // printf("%d", max);
    }
    return max;
}

int min(int arr[], int size)
{
    int min;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            min = arr[i];
        }
        //  printf("%d", min);
    }
    return min;
}