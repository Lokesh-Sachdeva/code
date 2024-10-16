package JAVA.preDSA;
// public class lecture {
//     public static void main(String[] args){
//         int counter=0;
//         while (counter<2){
//             System.out.println("hello world");
//             ++counter;
//         }
//     }

// }

// import java.util.*;
// public class lecture{
//     public static void main(String[] args){
//         Scanner sc= new Scanner(System.in);
//         int n= sc.nextInt();
//         int i = 1;
//         int sum = 0;
//         while (i<=n) {
//             sum+=i;
//             i++;
//         }
//         System.out.println("the sum of 1st "+ n+ " numbers is : " + sum);
//         sc.close();
//     }

// pattern part 1 

// public class pattern1 { //star pattern
//     public static void main(String[] args) {
//         for (int i = 1; i <= 4; i++) {
//             for (int j = 1; j <= i; j++) {
//                 System.out.print("*");
//             }
//             System.out.println();
//         }
//     }
// }

//ques 2 

// public class pattern1 { // inverted star pattern
//     public static void main(String[] args) {
//         for (int i = 1; i <= 4; i++) {
//             for (int j = 4; i <= j; j--) {
//                 System.out.print("*");
//             }
//             System.out.println();
//         }
//     }
// }
//          OR  
// public class pattern1 { // inverted star pattern
//     public static void main(String[] args) {
//         int n=4;
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j<= n-i+1 ; j++) {
//                 System.out.print("*");
//             }
//             System.out.println();
//         }
//     }
// }

// ques 3 half pyramid 

// public class pattern1 {
//     public static void main(String[] args) {
//         int n = 4;
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= i; j++) {
//                 System.out.print(j);
//             }
//             System.out.println();
//         }
//     }
// }

// ques 4 charachter pyramid 

public class pattern1 {
    public static void main(String[] args) {
        int n = 4;
        char unit = 'A';
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(unit);
                unit++;
            }
            System.out.println();
        }
    }
}