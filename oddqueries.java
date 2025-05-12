import java.io.*;
import java.util.*;

public class OddSumAfterRangeUpdate {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder output = new StringBuilder();
        
        int t = Integer.parseInt(br.readLine().trim());  
        
        while (t-- > 0) {
            String[] nq = br.readLine().split(" ");
            int n = Integer.parseInt(nq[0]);
            int q = Integer.parseInt(nq[1]);
            
            String[] arrStr = br.readLine().split(" ");
            int[] arr = new int[n];
            long totalSum = 0;
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(arrStr[i]);
                totalSum += arr[i];
            }
            
            long[] prefixSum = new long[n + 1];
            for (int i = 1; i <= n; i++) {
                prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
            }
            
            for (int i = 0; i < q; i++) {
                String[] query = br.readLine().split(" ");
                int l = Integer.parseInt(query[0]) - 1;
                int r = Integer.parseInt(query[1]) - 1;
                int k = Integer.parseInt(query[2]);
                
                long sumRange = prefixSum[r + 1] - prefixSum[l];
                int countRange = r - l + 1;
                
                long newSum = totalSum - sumRange + (long)countRange * k;
                
                if (newSum % 2 == 1) {
                    output.append("YES\n");
                } else {
                    output.append("NO\n");
                }
            }
        }
        
        System.out.print(output); 
    }
}
