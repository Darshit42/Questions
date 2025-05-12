import java.util.*;
import java.io.*;

public class DisappearingPermutation {
    public static void solve(Scanner sc) {
        int n = sc.nextInt();
        
        int[] p = new int[n];  
        int[] d = new int[n];  
        int[] pos = new int[n + 1];
        
        for (int i = 0; i < n; i++) {
            p[i] = sc.nextInt();
            pos[p[i]] = i;
        }
        
        for (int i = 0; i < n; i++) {
            d[i] = sc.nextInt() - 1;
        }

        int maxm = 0;
        int[] res = new int[n];

        Set<Integer> rem = new HashSet<>();
        
        for (int i = 0; i < n; i++) {
            rem.add(d[i]);
            
            maxm = Math.max(maxm, pos[d[i] + 1]);
            
            res[i] = rem.size() + (n - maxm - 1);
        }

        for (int x : res) System.out.print(x + " ");
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            solve(sc);
        }
        sc.close();
    }
}
