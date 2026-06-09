class Solution {
public:
    bool is_ang(string s, string t){
        unordered_map<char, int> mp;
        for (char c : s)
            mp[c]++;
        for (char c : t)
            mp[c]--;
        for (auto& p : mp){
             if (p.second != 0) return false;
        }    
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<int> ans;
        if (n < m)   return ans;
        string ang = "";
        for (int i = 0; i < m; i++){
            ang += s[i];
        }
        if (is_ang(ang, p)) ans.push_back(0); 
        for (int i = m; i <n; i++){
            ang += s[i];
            ang.erase(ang.begin());
            if (is_ang(ang, p)) ans.push_back(i - m + 1);     
        }
        return ans;
    }
};