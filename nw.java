public class nw {
    public static void main(String[] args) {
        String input = "hello world this is camel case";
        String camelCaseOutput = toCamelCase(input);
        System.out.println(camelCaseOutput); 
    }

    public static String toCamelCase(String str) {
        StringBuilder result = new StringBuilder();
        String[] words = str.split(" ");
        
        for (int i = 0; i < words.length; i++) {
            String word = words[i].toLowerCase(); 
            if (i == 0) {
                result.append(word);
            } else {
                result.append(Character.toUpperCase(word.charAt(0))); 
                result.append(word.substring(1));
            }
        }
        
        return result.toString();
    }
}