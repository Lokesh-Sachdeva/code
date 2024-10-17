package JAVA.preDSA;
// public class functions {
//     public static void swap(int a, int b) {

//         int temp = a;
//         a=b;
//         b = temp;
//     }

//     public static void main(String[] args) {
//         int a = 10;
//         int b = 5;
//         swap(a, b);
//         System.out.println("a = " + a);
//         System.out.println("b = " + b);
//     }
// }

// to find the factorial of a no.
// import java.util.*;

// public class functions {
//     public static int factorial(int num) {
//         int fac = 1;
//         for (int i = 1; i <= num; i++) {
//             fac *= i;
//         }
//         return fac;
//     }

//     public static float binomial(int n, int r) {
//         int fcatN = factorial(n);
//         int fcatR = factorial(r);
//         int fcat_sub = factorial(n - r);
//         float binomial = fcatN / (fcatR * fcat_sub);
//         return binomial;

//     }

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int num = sc.nextInt();
//         int fact = factorial(num);
//         System.out.println("the factorial of the number is : " + fact);

//         int n = 5;
//         int r = 2;
//         float cofficient = binomial(n, r);
//         System.out.println("the binomail cofficient of 5 C 2 is: " + cofficient);

//     }

// }

// to chsck if a no. is prime (used as a helper fx in dsa)
// public class functions {
//     public static boolean isPrime(int n) {
//         boolean isPrime = true;

//         for (int i = 2; i <= Math.sqrt(n); i++) {
//             if (n % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//         return isPrime;
//     }

//     public static void primeInRange(int a, int b) {
//         for (int i = a; i <= b; i++) {
//             if (isPrime(i) == true) {
//                 System.out.println(i + " is a prime number between " + a + " and " + b);
//             }
//         }
//     }

//     public static void main(String[] args) {
//         primeInRange(2, 10);

//     }
// }

// to convert a number form binary to decimal number sysytem 
// public class functions {
//     public static int binToDec(int n) {
//         int power = 0;
//         int decimal = 0;
//         while (n > 0) {
//             int lastnum= n%10;
//             decimal += lastnum * (int)Math.pow(2, power);
//             n/=10;
//             power++;
//         }
//         return decimal;
//     }

//     public static void main(String[] args) {
//         System.out.println(binToDec(101));
//     }
// }

// to convert from decimal to binary 
public class functions {
    public static void decToBin(int n) {
        int binary = 0;
        int power = 0;
        int mynum = n;
        do {
            int digit = n % 2;
            binary += digit * (int) Math.pow(10, power);
            n /= 2;

            power++;
        } while (n > 0);
        System.out.println(mynum + " in binary is " + binary);
    }

    // practice ques 1
    public static float avg(int a, int b, int c) {
        return (float) (a + b + c) / 3;
    }

    // practice ques 2
    public static boolean isEven(int n) {
        boolean isEven = true;
        if (n % 2 != 0) {
            isEven = false;
        }
        return isEven;

    }

    // practice ques 3
    public static void palendrome(int n) {
        int rev = 0;
        int mynum = n;
        while (n > 0) {
            int lastDigit = n % 10;
            rev = rev * 10 + lastDigit;
            n /= 10;
        }
        if (rev == mynum) {
            System.out.println(mynum + " is a palendrome");
        } else {
            System.out.println(mynum + "is not a palendrome");
        }
    }

    // practice ques 5 
    public static void sumOfNum(int n){
        int sum =0;
        while (n>0) {
            int lastDigit=n%10;
            n/=10;
            sum+=lastDigit;
        }
        System.out.println("sum of all digits = " +sum );
    }

    public static void main(String[] args) {
        System.out.println(Math.abs(12.34));
        System.out.println(Math.max(12, 18));
        System.out.println(Math.min(-1, -4));
        System.out.println(Math.sqrt(9.14));
        System.out.println(Math.cbrt(8.42));
        System.out.println(Math.pow(2, 2));
        System.out.println("Math.avg does not exist");
    }
}