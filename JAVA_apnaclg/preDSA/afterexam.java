// import java.util.*;
// public class afterexam {
//     public static void main(String[] args){
//         Scanner sc= new Scanner (System.in);
//         System.out.print("what is your age:");
//         int age = sc.nextInt();
//         if (age>=18) {
//             System.out.println("elligible o vote.");
//         }
//         else{
//             System.out.println("not eligible to vote.");
//         }
//     }

// }

// ques 1 (conditional statements)
// import java.util.*;
// public class afterexam{
//     public static void main(String[] args){
//         Scanner sc= new Scanner(System.in);
//         System.out.print("enter any integer");
//         int number = sc.nextInt();

//         if(number>0){
//             System.out.println("the integer is positive");
//         } else if(number==0) {
//             System.out.println("the integer is neither positive nor negative");
//         } else {
//             System.out.println("the integer is negative");
//         }

//     }
// }

// ques 2 

// import java.util.*;
// public class afterexam{
//     public static void main(String[] args){
//         Scanner sc= new Scanner(System.in);
//         System.out.print("enter your body temprature:");
//         double temp = sc.nextDouble();
//         if(temp>100){
//             System.out.println("you have a fever");
//         } else {
//             System.out.println("you dont have a fever");
//         }
//     }
// }

// import java.util.*;
// public class afterexam{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         System.out.print("enter the number of the day of the week(ex- for monday write 1):");
//         int day = sc.nextInt();
//         switch (day) {
//             case 1: System.out.println("monday");
//                 break;
//             case 2: System.out.println("tuesday");break;
//             case 3: System.out.println("wednesday");break;
//             case 4: System.out.println("thursday");break;
//             case 5: System.out.println("friday");break;
//             case 6: System.out.println("saturday");break;
//             case 7: System.out.println("sunday");break;

//             default:System.out.println("there is no "+day+"th"+ " day in the week");
//                 break;
//         }
//     }
// }

// ques 5 (very good and important)
import java.util.*;

public class afterexam {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter any year:");
        int year = sc.nextInt();
        boolean test1 = year % 4 == 0;
        boolean test2 = year % 100 != 0;
        boolean test3 = year % 400 == 0;
        if ((test1 && (test2 || test3)) == true) {
            System.out.println("it is a leap year");
        } else {
            System.out.println("it is not a leap year");
        }
        sc.close();
    }
}