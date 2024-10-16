// recursion
# include <stdio.h>
int fact(int n){
    if (n==1)   
    {
        return 1;
    }
    
    int factorial = fact(n-1)*n;
    return factorial;
}

int fib(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    int fibnm1=fib(n-1);
    int fibnm2=fib(n-2);
    int fibn=fibnm1+fibnm2;

    return fibn;
}
void main(){
    // int factorial=fact(5);
    // printf("the factorial is:%d",factorial);
    printf("the fibnacci 5th fibnacci number is:%d",fib(6));
    int age=5;
    int *ptr=&age;
    int b=&age;
    printf("the ptr is:%u",*ptr);
    printf("the b is:%d",b);
}