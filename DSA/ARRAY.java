import java.util.*;
// worng logic it is for some reason, atleast it is incomplete if not worng completely.

public class ARRAY {
    public static void rainwater(int arr[]) {
        int water = 0;
        for (int i = 1; i < arr.length; i++) {
            int maxlft = 0;
            int maxrt = 0;

            if (arr[i - 1] > arr[i]) {
                maxlft = arr[i - 1];
            }
            for (int j = i; j < arr.length - 1; j++) {
                if (arr[j] > arr[j + 1] && arr[j] > arr[i]) {
                    maxrt = arr[j];
                    break;
                }
            }
            if (maxrt > 0) {
                int lvl = Math.min(maxlft, maxrt);
                water += lvl - arr[i];
            }
        }
        System.out.println("The total water stored is " + water);
    }

    public static void main(String[] args) {
        int height[] = {4, 2, 0, 6, 3, 2, 5};
        rainwater(height);
    }
}
