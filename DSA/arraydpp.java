// ques 1 (arra approach )
// even though hashset approach is better 
// public class arraydpp {
// public static int distinct(int arr[]){
//     int n=arr.length;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n ; j++){
//             if(arr[i]==arr[j]){
//                 System.out.println("true");
//                 return 1;
//             }
//         }
//     }
//     System.out.println("false");
//     return 0;

// }
// public static void main(String[] args) {
//     int num[]= {1,2,3,1};
//     distinct(num);
// }
// }

//ques 2
// public class arraydpp {
//     public static int findTarget(int arr[], int target) {
//         int low = 0;
//         int high = arr.length - 1;
//         int mid = (low + high) / 2;
//         while (target != arr[mid]) {
//             mid = (low + high) / 2;
//             if (arr[mid] == target) {
//                 return mid;
//             } else if (arr[low] > target) {
//                 low = mid + 1;
//             } else {
//                 high = mid - 1;
//             }
//         }
//         return -1;
//     }

//     public static void main(String[] args) {
//         int arr[] = { 4, 5, 6, 7, 0, 1, 2 };
//         System.out.println(findTarget(arr, 3));
//     }
// }
import java.util.*;
//ques 3
// public class arraydpp {
//     public static int maxprofit(int price[]){
//         int buyingPrice = Integer.MAX_VALUE;
//         int maxprofit = 0;
//         for (int i=0; i< price.length; i++){
//             if(price[i]<buyingPrice){
//                 buyingPrice=price[i];
//             }else if(price[i]>buyingPrice){
//                 int profit= price[i] - buyingPrice;
//                 maxprofit = Math.max(maxprofit, profit);
//             }
//         }
//         if(maxprofit<0){
//             maxprofit=0;
//         }
//         return maxprofit;
//     }
//     public static void main(String[] args) {
//         int price[]={7,6,4,3,1};
//         System.out.println(maxprofit(price));
//     }
// }

//ques 4
public class arraydpp {
    public static int trappedWater(int height[]) {
        int n = height.length;
        int leftmax[] = new int[n];
        int rtmax[] = new int[n];

        leftmax[0] = height[0];
        rtmax[n - 1] = height[n - 1]; // Fix index

        for (int i = 1; i < n; i++) {
            leftmax[i] = Math.max(leftmax[i - 1], height[i]);
        }
        for (int j = n - 2; j >= 0; j--) { // Fix loop condition
            rtmax[j] = Math.max(rtmax[j + 1], height[j]);
        }

        int storedwater = 0;
        for (int i = 0; i < n; i++) {
            int waterlvl = Math.min(leftmax[i], rtmax[i]);
            storedwater += waterlvl - height[i];
        }
        return storedwater;
    }

    public static void main(String[] args) {
        int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};
        System.out.println(trappedWater(height));
    }
}
