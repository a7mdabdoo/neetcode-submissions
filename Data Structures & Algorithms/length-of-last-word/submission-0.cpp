class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n=s.size(),cnt=0;
        int i=n-1;
        while (i>=0 and s[i]==' ')--i;
        
        for (int j=i;j>=0;--j){
            if (s[j]== ' ')break;
            cnt++;
            
        }
        return cnt;
    }
};