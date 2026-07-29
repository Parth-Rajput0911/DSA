//WAP TO ENTER 20 INTEGER USING DMA 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n ;
    printf("Enter the no of element: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    printf("enter the elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", ptr + i);
    }
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + *(ptr+i);
    }
    printf("the sum of element is %d",sum);
    return 0;
}