class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>neg,pos;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] < 0) neg.push_back(nums[i]*nums[i]);
            else pos.push_back(nums[i]*nums[i]);
        }
         reverse(neg.begin(), neg.end());
        int i = 0 , j = 0 , k = 0;
        while(i < neg.size() && j < pos.size()){
            if(neg[i] <= pos[j]) nums[k++] = neg[i++];
            else nums[k++] = pos[j++];
        }
        while(i < neg.size()  ){
            nums[k++] = neg[i++];
        }
        while(j < pos.size() ){
            nums[k++] = pos[j++];
        }
        return nums;
    }
};