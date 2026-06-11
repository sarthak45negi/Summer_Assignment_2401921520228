class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for (char c : s) {
            if (c != ']') {
                st.push(c);
            } else {
                string t = "";
                while (!st.empty() && st.top() != '[') {
                    t = st.top() + t;
                    st.pop();
                }
                st.pop(); 
                string num = "";
                while (!st.empty() && isdigit(st.top())) {
                    num = st.top() + num;
                    st.pop();
                }
                int k = stoi(num);
                string l = "";
                while (k--) {
                    l += t;
                }
                for (char ch : l) {
                    st.push(ch);
                }
            }
        }
        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};