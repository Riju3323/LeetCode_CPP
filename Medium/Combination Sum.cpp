class Solution {
public:
    void recsolve(vector<vector<int>>& res, vector<int>& candidates, vector<int> &temp, int target, int i, int sum)
    {
        if(sum==target)
        {
            res.push_back(temp);
            return;
        }
        if(sum>target || i>(candidates.size()-1))
        {
            return;
        }
        temp.push_back(candidates[i]);
        recsolve(res,candidates,temp,target,i,sum+candidates[i]);
        temp.pop_back();
        recsolve(res,candidates,temp,target,i+1,sum);
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int k = candidates.size();
        vector<vector<int>> res;
        vector<int> temp;
        recsolve(res,candidates,temp,target,0,0);
        return res;
    }
};