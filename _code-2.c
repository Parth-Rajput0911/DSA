//  find sum of diagonal using UDF
#include <stdio.h>
int diagonalSum(int a[10][10], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    return sum;
}
int main()
{
    int a[10][10];
    int n, i, j, sum;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    sum = diagonalSum(a, n);

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}