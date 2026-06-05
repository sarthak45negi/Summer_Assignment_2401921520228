class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string t = "";
        for(int i = 0 ; i < n ; i++){
            if(isalnum(s[i])){
                t += tolower(s[i]);
            }
        }
        int st = 0;
        int en = t.size()-1;
        while(st <= en){
            if(t[st] != t[en]) return false;
            else {
                st++;
                en--;
            }
        }
        return true;
    }
};