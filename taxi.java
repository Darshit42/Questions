import java.util.*;
 
public class taxi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        HashMap<Integer, Integer> count = new HashMap<>();
 
        for (int i = 0; i < n; i++) {
            int num = sc.nextInt();
            count.put(num, count.getOrDefault(num, 0) + 1);
        }
 
        int taxis = 0;
 
        taxis += count.getOrDefault(4, 0);
 
        int groupsOf3 = count.getOrDefault(3, 0);
        int groupsOf1 = count.getOrDefault(1, 0);
        taxis += groupsOf3; 
        groupsOf1 -= groupsOf3;
 
        int groupsOf2 = count.getOrDefault(2, 0);
        taxis += groupsOf2 / 2; 
        if (groupsOf2 % 2 == 1) {
            taxis += 1;
            groupsOf1 -= 2; 
        }
 
        if (groupsOf1 > 0) {
            taxis += (groupsOf1 + 3) / 4;
        }
 
        System.out.println(taxis);
    }
}