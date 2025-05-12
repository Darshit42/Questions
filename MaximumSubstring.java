import java.util.*;

public class MaximumSubstring {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        while(n>0){
            int i=sc.nextInt();
            String s =sc.nextLine();
            int ones=0;
            int zeros=0;
            int x=0;
            while(x<i){
                if(s.charAt(x)=='0'){
                    zeros++;
                }else{
                    ones++;
                }
                x++;
            }
            if(zeros==0){
                System.out.println(zeros*zeros);
            }else if(ones==0){
                System.out.println(ones*ones);
            }else{

                System.out.println(zeros*ones);
            }
            n--;
        }
    }
}
