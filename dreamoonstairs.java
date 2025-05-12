import java.util.Scanner;

public class dreamoonstairs {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); 
        int m = sc.nextInt();

        if (m > n) {
            System.out.println("-1"); 
        } else {
            int steps = 0;
            int i=0;
            while(2*i*m<n){
                i++;
            }
            i--;
            steps = i*m;
            n-=i*2*m;
            if(n!=0){
                steps++;
                n--;
            }
            while(steps%m!=0){
                steps++;
            }
            System.out.println(steps);
        }
    }
}