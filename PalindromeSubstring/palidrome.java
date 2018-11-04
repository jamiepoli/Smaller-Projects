    public String longestPalindrome(String s) {
        if (s.length() < 2) return s;
        char[] str = s.toCharArray();
        String res = s.valueOf(str[0]);

        for (int i = 0; i < s.length() - 1; i++){

            for (int j = i + 1; j < s.length() && j < i + 3; j++) {
                int low = i, high = j;

                while (low >= 0 && str[low] == str[high] && end < s.length()) {         // search longest starting from here
                    res = res.length() >= (high - start + 1) ? sol : s.substring(low, high + 1);
                    low--; high++;
                }
            }
        }
        return res;
    }