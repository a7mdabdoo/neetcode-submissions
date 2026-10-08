class Solution {
   public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;

        for (string s : details) {
            string res = "";
            for (int i = s.size() - 3; i >= 0; --i) {
                if (s[i] == 'M' or s[i] == 'F' or s[i] == 'O') {
                    break;
                }
                res = s[i] + res;
            }
            int age = (res[0] - '0') * 10 + (res[1] - '0');
            if (age > 60) {
                cnt++;
            }
        }

        return cnt;
    }
};