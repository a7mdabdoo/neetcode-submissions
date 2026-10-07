class Solution {
public:
    int appendCharacters(string s, string t) {
        int i =0, j = 0;
        int s_size = s.size(), t_size = t.size();
        while (i < s_size && j < t_size) {
            if (s[i] == t[j]) {
                j++;
            }
            i++;
        }
        return t_size - j;
    }

};