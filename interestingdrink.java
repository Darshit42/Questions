import java.util.*;

public class interestingdrink {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int nshops = sc.nextInt();
        int[] prices = new int[nshops];
        
        for (int i = 0; i < nshops; i++) {
            prices[i] = sc.nextInt();
        }
        
        int days = sc.nextInt();
        Arrays.sort(prices);
        
        for (int i = 0; i < days; i++) {
            int budget = sc.nextInt();
            int count = binarysearch(prices, budget);
            System.out.println(count);
        }
        
    }
    
    private static int binarysearch(int[] prices, int budget) {
        int left = 0, right = prices.length;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (prices[mid] <= budget) {
                left = mid + 1; 
            } else {
                right = mid; 
            }
        }
        
        return left; 
    }
}