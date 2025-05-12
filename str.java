public class str{
    static String rev (String s){
        if(s.length()==0){
            return s;
        }

        return rev(s.substring(1))+s.charAt(0);
    }

    public static void main(String [] args){
        System.out.println(rev("izan tsal eht"));
    }
}