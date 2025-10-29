// public class recurssion2 {
//     public static int stringLength(String str){
//         //base condn 
//         if(!str.charAt(length)){   //.chatAt() gives the char nor boolean vlaue & length is not defined here 
//             return length-1;
//         }
//         //kamm
//         int length = 0;
//         if(str.charAt(length)){
//             length++;   
//         }
//         stringLength(str);
//     }
//     public static void main(String[] args) {
//         String str = "hello";
//         System.out.println(stringLength(str););
//     }
// }

public class Recursion2 {

    public static int stringLength(String str, int index) {         
        // Base case
        if (index == str.length()) {        //base case should be when index reaches the length of the string
            return 0;
        }

        // Recursive case
        return 1 + stringLength(str, index + 1);
    }

    public static void main(String[] args) {
        String str = "hello";
        System.out.println(stringLength(str, 0)); 
    }
}