//sparce matrix
#include <stdio.h>
void main(){
    int r,c;
    printf("enter the number of rows required: \n");
    scanf("%d",&r);
    printf("enter the number of columns required: \n");
    scanf("%d",&c);

    int arr[r][c];

    for(int i=0 ; i<r; i++){
        for(int j=0; j<c ;j++){
            printf("enter the value of arr[%d][%d] :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int count1= 0;
    int count0=0;
    for(int i=0 ; i<r; i++){
        for(int j=0; j<c ;j++){
            if(arr[i][j]!=0){
                count1+=count1;
            }else{
                count0+=count0;
            }
        }
    }

    if(count0 > count1){
        printf("this is a sparce matrix");
    }else
    {
        printf("NOT a sparce matrix");
    }
   
}
