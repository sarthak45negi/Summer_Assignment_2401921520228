class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int  m = nums2.size();
        vector<int>ans(n,-1);
        for(int i = 0; i < n ; i++){
            for (int j = 0 ; j < m ; j++){
                if(nums1[i]==nums2[j]){
                   for(int h = j+1 ; h < m ; h++ ){
                    if(nums2[j] < nums2[h]){
                        ans[i]= nums2[h];
                        break;
                    }
                   }
                }
            }
        }
        return ans;
    }
};