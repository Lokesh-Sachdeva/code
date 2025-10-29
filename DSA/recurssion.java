public class recurssion {

     public static void indicesOfKey(int arr[], int key, int i){
            if(i>= arr.length){
                return;
            }
            //kamm
            if (arr[i]==key) {
                System.out.println(i);
            }
            indicesOfKey(arr, key, i+1);
        }

    public static void main(String[] args) {
        int arr[] = {3,2,4,5,6,2,7,2,2};
        indicesOfKey(arr, 2 , 0);
    }
}
