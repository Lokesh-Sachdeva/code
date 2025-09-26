// public class anagrm {
//     public static void isAnagram(String str1, String str2){

//     }
//     public static void main(String[] args) {
//         String str = "race";
//         string str1 = "acre";

//     }
// }
public class anagrm {
    public static void main(String[] args) {
        String str1 = "earth";
        String str2 = "heart";

        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();

        if (str1.length() != str2.length()) {
            System.out.println(str1 + " and " + str2 + " are not anagrams.");
            return;
        }

        int[] count = new int[26]; // for 'a' to 'z'

        for (int i = 0; i < str1.length(); i++) {
            count[str1.charAt(i) - 'a']++;
            count[str2.charAt(i) - 'a']--;
        }

        for (int val : count) {
            if (val != 0) {
                System.out.println(str1 + " and " + str2 + " are not anagrams.");
                return;
            }
        }

        System.out.println(str1 + " and " + str2 + " are anagrams.");
    }
}