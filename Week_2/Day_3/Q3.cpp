class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for (int i = 1; i <= n / 2; i++){
            if (n % i != 0) continue;
            string p = s.substr(0, i);
            string temp = "";
            int t = n / i;
            for (int j = 0; j < t; j++){
                temp += p;
            }
            if (temp == s) return true;
        }
        return false;
    }
};