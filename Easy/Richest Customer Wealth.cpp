class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0;
        for(auto x:accounts)
        {
            sum = max(sum,accumulate(x.begin(),x.end(),0));
        }
        return sum;
    }
};