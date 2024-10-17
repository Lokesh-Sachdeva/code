package JAVA.preDSA;
// ques no. 1 for practice of lecture 2 
// import java.util.*;
// public class javapractice { 
//     public static void main(String[] args){
//         Scanner scan=new Scanner(System.in);
//         int a=scan.nextInt();
//         int b=scan.nextInt();
//         int c=scan.nextInt();
//         float avg=(a+b+c)/3;
//         System.out.println(avg);

//     }

// }

// practice ques 2 lec 2

// import java.util.*;
// public class javapractice { 
//     public static void main(String[] args){
//         Scanner scan=new Scanner(System.in);
//         float side=scan.nextFloat();
//         float area = side*side;
//         System.out.println(area);}}

// import java.util.*;

// public class javapractice {
//     public static void main(String[] args) {
//         Scanner scan = new Scanner(System.in);
//         System.out.print("enter the cost of the pencil:");
//         float PencilCost = scan.nextFloat();
//         System.out.print("enter the cost of the pen:");
//         float PenCost = scan.nextFloat();
//         System.out.print("enter the cost of the eraser:");
//         float EraserCost = scan.nextFloat();

//         float TotalCost = PencilCost + PenCost + EraserCost;
//         float TotalBill = TotalCost + TotalCost * 18 / 100;

//         System.out.println("the total amount to be paid is:" + TotalBill);
//         scan.close();
//     }
// }

// import java.util.*;

// public class javapractice {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("enter the number:");
//         int num = sc.nextInt();
//         int temp = 0;
//         int odd = 0;
//         int even = 0;
//         for (int i = num; i > 0; i /= 10) {
//             temp = num % 10;
//             num /= 10;
//             if (temp % 2 == 0) {
//                 even += temp;
//             } else {
//                 odd += temp;
//             }
//         }
//         sc.close();
//         System.out.println("the sum of the odd digits of the number is " + odd);
//         System.out.println("the sum of the even digits of the number is " + even);
//     }
// }

// import java.util.*;

// public class javapractice {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//         int even = 0;
//         int odd = 0;
//         int choice = 1;

//         while (choice == 1) {
//             System.out.print("enter the number u want to add:");

//             int num = sc.nextInt();
//             if (num % 2 == 0) {
//                 even += num;
//             } else {
//                 odd += num;
//             }
//             System.out.print("enter 1 if u want to enter another number, if not enter 0:");
//             choice = sc.nextInt();
//         }

//         System.out.println("the sum of the odd numbers is:" + odd);
//         System.out.println("the sum of the even numbers is:" + even);
//     }
// }

// import java.util.*;

// public class javapractice {
//     public static void main(String[] args){
//         Scanner sc= new Scanner(System.in);
//         System.out.print("enetr the number you want the TABLE of:");
//         int n= sc.nextInt();
//         for (int i=1; i<=10; i++){
//             System.out.println(n + "*" + i + "=" + n*i);
//         }
//     }
// }

// import java.util.*;

// public class javapractice {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("enter the number to find factorial:");
//         int num = sc.nextInt();
//         int i = 1;
//         int fac = 1;
//         do {
//             fac *= i;
//             i++;
//         } while (i <= num);
//         System.out.println("the factoriall of "+ num + " is " + fac);
//     }
// }

