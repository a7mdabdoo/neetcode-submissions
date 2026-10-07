class Solution {
   public:
    int scoreOfString(string s) {
        int asci=0;
        for (int i = 0; i < s.length()-1; i++) {
            asci += abs(s[i]-s[i+1]);
        }
        return asci;
    }
};