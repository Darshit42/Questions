
import java.util.Scanner;

public class HalloumiBoxes{
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int t=sc.nextInt();

        
        while(t>0){
            int n=sc.nextInt();
            int k=sc.nextInt();

            int[] arr = new int[n];
            int i=1;
            while(n>0){
                int f=sc.nextInt();
                arr[n-1]=f;
                n--;
            }
            if(k>1){
                System.out.println("YES");
            }else{
                int x=arr[0];
                boolean flag=false;
                for(int p:arr){
                    if(p!=x){
                        flag=true;
                        break;
                    }
                }
                if(flag){

                    System.out.println("NO");
                }else{
                    System.out.println("YEs");
                }
            }
            
            t--;
        }
        
    }
}

