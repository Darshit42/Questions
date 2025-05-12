import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n= sc.nextInt();
        while (n>0) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            int[] arr = new int[x];
            for(int i=0;i<x;i++){
                int p=sc.nextInt();
                arr[i]=p;
            }

            int[] p =Arrays.sort(arr);

            Arrays.equals(arr, p);

            if(y<=1){
                System.out.println("NO");
            }else{
                System.out.println("YES");
            }

            n--;
        }
    }
}
