class Solution {
public:
    bool isAnagram(string s, string t) {
        sort (s.begin(),s.end());
        sort (t.begin() , t.end());
        for (int i=1;i<=max(s.size(),t.size());++i ){
            if (t[i-1]!=s[i-1]){
                return false;
            }
        }
        return true;
    }
};
