public class recurssion1 {
    public static void toString(int num){
        if(num == 0){
            return;
        }
        String digits[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
        int lastdigit = num % 10;
        int remainingnum = num / 10;
        toString(remainingnum);
        System.out.print(digits[lastdigit] + " ");
    }
    public static void main(String[] args) {
        int num = 2019 ;
        toString(num);
    }
}
