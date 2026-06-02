class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0,avg = 0,mx = 0;
        for(int i = 0;i < k;i++){
            sum += nums[i];
        }
        avg = sum/k;
        mx = avg;
        for(int i = k;i<n;i++){
            sum += nums[i];
            sum -= nums[i-k];
            avg = sum/k;
            mx = max(mx,avg);
        }
        return mx;
    }
};