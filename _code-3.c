//FIND MAX AND MIN  USING UDF
#include <stdio.h>
int findMax(int arr[], int n)
{
    int i, max;

    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}
int findMin(int arr[], int n)
{
    int i, min;

    min = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}
int main()
{
    int arr[50], n, i;
    int max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = findMax(arr, n);
    min = findMin(arr, n);
    printf("\nMaximum element = %d", max);
    printf("\nMinimum element = %d", min);

    return 0;
}