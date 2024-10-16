// Code
#include <stdio.h>
int linear(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            printf("The index of %d is %d", num, i);
            return 0;
        }
    }
    printf("%d doesn't exist in the given array", num);
}
int binary(int arr[], int n, int num)
{
    int high = n - 1, low = 0;
    int mid = (low + high) / 2;
    do
    {
        if ((high - low) < 0)
        {
            printf("\n%d doesn't exist in the given array", num);
            return 0;
        }
        int mid = (low + high) / 2;
        if (arr[mid] == num)
        {
            printf("\nThe index of %d is %d", num, mid);
            return 0;
        }
        else if (arr[mid] > num)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    } while (arr[mid] != num);
}
int main()
{
    int n, num, o;
    printf("Enter the array size:");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the values of array in assending order:");
    for (int i = 0; i < n; i++)
    {
        printf("\nArr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to find:");
    scanf("%d", &num);
    printf("Binary Search (1) or Linear Search (2):");
    scanf("%d", &o);
    if (o == 1)
    {
        binary(arr, n, num);
    }
    else if (o == 2)
    {
        linear(arr, n, num);
    }
    return 0;
}
