#include <stdio.h>
void main()
{
int r, c, num;
printf("Enter the number of columns:");
scanf("%d", &c);
printf("Enter the number of rows:");
scanf("%d",&r);
int arr[c][r];
// int arr1[c][r];
// int arr2[c][r];
printf("Enter the values of 1st matrix:");
for(int i = 1; i <= r; i++)
{
for(int j = 1; j <= c; j++)
{
printf("Enter arr[%d][%d]:", i, j);
scanf("%d", &arr[i][j]);
}
}
// printf("Enter the values of 2nd matrix:");
// for(int i = 1; i <= r; i++)
// {
// for(int j = 1; j <= c; j++)
// {
// printf("Enter arr1[%d][%d]:", i, j);
// scanf("%d", &arr1[i][j]);
// }
// }
// printf("For sum or diff enter 0 or 1, respectively:");
// scanf("%d", &num);



for(int i = 1; i <= r; i++)
{
for(int j = 1; j <= c; j++)
{
printf("Value at i = %d, j = %d: %d\n", i, j, arr[i][j]);
}
}

}