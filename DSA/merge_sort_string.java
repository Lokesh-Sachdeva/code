public class merge_sort_string {
    public static void merge(String[] arr, int si, int ei, int mid) {
        String[] temp = new String[ei - si + 1];
        int temp_iterator = 0;
        int left_iterator = si;
        int right_iterator = mid + 1;
        while ((left_iterator <= mid) && (right_iterator <= ei)) {
            if (arr[left_iterator].compareTo(arr[right_iterator]) < 0) {
                temp[temp_iterator] = arr[left_iterator];
                left_iterator++;
                temp_iterator++;
            } else {
                temp[temp_iterator] = arr[right_iterator];
                right_iterator++;
                temp_iterator++;
            }
        }
        while (left_iterator <= mid) {
            temp[temp_iterator] = arr[left_iterator];
            left_iterator++;
            temp_iterator++;
        }
        while (right_iterator <= ei) {
            temp[temp_iterator] = arr[right_iterator];
            right_iterator++;
            temp_iterator++;
        }
        for (int i = 0; i < temp.length; i++) {
            arr[si + i] = temp[i];
        }

    }

    public static String[] merge_sort_arr(String[] arr, int si, int ei) {
       if(si>=ei){
        return arr;}
        // kamm
        int mid = si + (ei - si) / 2;
        merge_sort_arr(arr, mid + 1, ei); // right side
        merge_sort_arr(arr, si, mid); // left side
        merge(arr, si, ei, mid);

        return arr;
    }

    public static void main(String[] args) {
        String[] arr = { "sun", "earth", "moon", "mars" };
        String[] result = merge_sort_arr(arr, 0, 3);
        for (String str : result) {
            System.out.print(str + " ");
        }
    }
}
