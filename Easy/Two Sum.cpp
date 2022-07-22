class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> s(2,0);
        for(int i=0;i<nums.size();i++)
        { 
            if(m.find(target-nums[i])!=m.end())
            {
                s[0]=i;
                s[1]=m[(target-nums[i])];
                break;
            }
            else
            {
                m[nums[i]]=i;
            }
        }
        return s;
        
    }
};