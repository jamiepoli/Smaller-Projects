class Solution {
    public String reverseWords(String s) {
    	String res = "";
    	String[] strings = s.split(" ");

    	for (int i = 0; i < strings.length; i++){
    		res = res.concat(reverseSingleWord(strings[i]));
    		if (i != strings.length - 1){
    			res = res.concat(" ");
    		}
    	}
    }

    public String reverseSingleWord(String s){
    	String res = "";

    	for (int i = s.length() - 1; i >= 0; i--){
            res = res.concat(Character.toString
                (s.charAt(i)));  
    	}
    	return res;
    }

}