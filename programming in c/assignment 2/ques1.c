# include <stdio.h>
void main(){
    int n,i,evensum=0,oddsum=0;
    printf("enter the number of elements in an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
        {
            evensum+=arr[i];
        }else
        {
            oddsum+=arr[i];
        }
        
        
    }
    if(evensum>oddsum){
        printf("sum of all even elements is %d \n",evensum);
        
    }else
    {
        printf("sum of all odd elements is %d \n",oddsum);
    }
    
}