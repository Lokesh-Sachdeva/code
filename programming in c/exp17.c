// #include<stdio.h>
// void main(){
//     int count=0,times=0;
//     for(int i=2;i<=100;i++){
//         for (int j = 2 ; j <= i/2; j++){
//             if(i%j==0){ 
//                 count++;
//                 break;
//                 }
//         }
//         if(count==0){
//             printf("%d",i);
//             times++;
//         }
//         count++;
//     }
//     printf("total number of primes: %d",times);
// }
#include <stdio.h>

// Function to check if a number is prime
#include <stdio.h>
int isPrime(int num) {
    if (num <= 1)
        return 0; // Not prime
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}

int main() {
    printf("Prime numbers between 1 and 100:\n");
    for (int i = 2; i <= 100; ++i) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
