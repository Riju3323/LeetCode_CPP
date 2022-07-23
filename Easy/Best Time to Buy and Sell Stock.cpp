class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=prices[0],r=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<l)
            {
                l  = prices[i];
            }
            r = max(r,prices[i]-l);
        }
        return r;
    }
};