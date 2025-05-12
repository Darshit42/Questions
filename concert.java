import java.util.Arrays;
import java.util.Scanner;

public class concert{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        while(n>0){
            int k=sc.nextInt();
            System.out.println(k*2);
            n--;
        }
    }
}