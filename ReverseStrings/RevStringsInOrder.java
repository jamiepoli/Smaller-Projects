class Solution {
    public String reverseWords(String s) {
    	String temp = "";
    	String res = "";
    	String[] strings = s.split(" ");

    	for (int i = 0; i < strings.length; i++){
    		temp = reverseSingleWord(strings[i]);
    		res = res.concat(temp);
    		if (i != strings.length - 1){
    			res = res.concat(" ");
    		}
    	}
    }

    public String reverseSingleWord(String s){
    	String res = "";

    	for (int i = s.length() - 1; i >= 0; i--){
    		String a = Character.toString(s.charAt(i));
            
            res = res.concat(a);
            
    	}

    	return res;
    }
}