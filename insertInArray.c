#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7};
    int pos, ele;
    int size = sizeof(arr)/ sizeof(arr[0]);
    printf("enter element: ");
    scanf("%d", &ele);
    printf("enter position:");
    scanf("%d", &pos);
    printf("%d", size);
    printf("original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = size; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ele;

    printf("new array: ");
    for (int i = 0; i <= size; i++)
    {
        printf("%d ", arr[i]);
    }
}