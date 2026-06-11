class Solution {
public:
    bool isValid(string s){
        int bal = 0;
        for(char c:s){
            if(c == '(') bal++;
            else bal--;
            if(bal < 0) return false;
        }
        return bal == 0;
    }
    void gen(int n,string curr,vector<string>&ans) {
        if(curr.size() == 2*n){
            if(isValid(curr)) ans.push_back(curr);
            return;
        }
        gen(n,curr + '(',ans);
        gen(n,curr + ')',ans);
    }
    vector<string> generateParenthesis(int n) {
        string curr = "";
        vector<string>ans;
        gen(n,curr,ans);
        return ans;
    }
};