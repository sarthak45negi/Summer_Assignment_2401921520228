class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0; 
        int idx = 0; 
        while (i < n) {
            char curr = chars[i];
            int cnt = 0;
            while (i < n && chars[i] == curr) {
                i++;
                cnt++;
            }
            chars[idx++] = curr;
            if (cnt > 1) {
                string ans = to_string(cnt);
                for (char c : ans) {
                    chars[idx++] = c;
                }
            }
        }
        return idx;
    }
};