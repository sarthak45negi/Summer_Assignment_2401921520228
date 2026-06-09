class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int n = s.size();
        int i = 0;
        int mx = 0;
        for(int j = 0; j < n ;j++){
            while(st.count(s[j])){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            mx = max(mx,j-i+1);
        }
        return mx;
    }
};