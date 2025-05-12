
import java.util.Scanner;

public class bearandbrother {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int bear = sc.nextInt();
        int brother = sc.nextInt();
        int step=0;
        while(bear<=brother){
            bear*=3;
            step++;
            brother*=2;
        }
        System.out.println(step);
    }
}
