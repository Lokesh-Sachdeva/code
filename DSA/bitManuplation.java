// import java.util.*;

// public class bitManuplation {
//     public static int expo(int n){
//         int temp = n;
//         int nton = 1;
//         while (n>0) {
//             if((n&1)==0){
//                 n=n>>1;
//                 temp *= temp;
//                 nton = temp;
//             }else{
//                 temp *= temp;
//                 n=n>>1;
//             }
//         }
//         return temp;
//     }
//     public static void main(String[] args) {
//     int x = 2; //010
//     System.out.println(expo(x));
// }
// }

// ques 1

// public class BitManipulation {
//     public static int expo(int n) {
//         int base = n;
//         int exponent = n;
//         int result = 1;

//         while (exponent > 0) {
//             if ((exponent & 1) == 1) {
//                 result *= base;
//             }
//             base *= base;
//             exponent >>= 1;
//         }

//         return result;
//     }

//     public static void main(String[] args) {
//         int x = 2;
//         System.out.println(expo(x)); // Output: 4
//     }
// }

// ques 2 
