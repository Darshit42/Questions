import java.util.*;

public class discountinshop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        for (int i = 0; i < t; i++) {
            int number = sc.nextInt();
            int temp = number;
            int max = 0;

            while (temp > 0) {
                int rem = temp % 10;
                if (rem > max) {
                    max = rem;
                }
                temp /= 10;
            }

            String str = Integer.toString(number);

            if (str.length() >= 2 && str.charAt(1) == '0') {
                str = str.substring(1);
            }else{
            str = str.replaceFirst(String.valueOf(max), "");
            }
            int ans = Integer.parseInt(str);
            System.out.println(ans);
        }
    }
}