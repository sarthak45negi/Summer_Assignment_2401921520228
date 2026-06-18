class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n = heights.size();
        int mx = 0;
        for (int i = 0; i <= n; i++) {
            int curr =(i == n)?0:heights[i];
            while (!st.empty() && heights[st.top()] > curr){
                int h = heights[st.top()];
                st.pop();
                int r = i;
                int l = st.empty() ? -1 : st.top();
                int w = r - l - 1;
                mx = max(mx,h * w);
            }
            st.push(i);
        }
        return mx;
    }
};