class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> lr(nums.size(),1);
        vector<int> rl(nums.size(),1);
        vector<int> res(nums.size(),1);
        lr[0] = nums[0];
        rl[nums.size()-1] = nums[nums.size()-1];
        for(int i=1;i<nums.size();i++)
        {
            lr[i] = nums[i]*(lr[i-1]);
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            rl[i] = nums[i]*(rl[i+1]);
        }
        for(int i=1;i<nums.size()-1;i++)
        {
            res[i] = lr[i-1]*rl[i+1]; 
        }
        res[0] = rl[1];
        res[nums.size()-1] = lr[nums.size()-2];
        return res;
    }
};