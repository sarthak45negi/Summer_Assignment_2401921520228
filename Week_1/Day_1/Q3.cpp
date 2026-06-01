class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mxpro = 0;
        int mnprice = INT_MAX;
        for(int i=0;i<n;i++){
            mnprice = min(mnprice ,  prices[i]);
            mxpro = max(mxpro,prices[i]- mnprice);  
        }
        return mxpro;
    }
};