import java.util.*;

public class orderingteams {
    private boolean check(int a , int b){
        return Math.abs(a-b)==0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        boolean flag=true;
        int [][] teams = new int[n][3];
        for(int i=0;i<n;i++){
            
            for(int j=0;j<n;j++){
                teams[i][j] = sc.nextInt();
            }
        }
        for(int i=0;i<n;i++){
            if(check(teams[i][1]))
        }
    }
}
