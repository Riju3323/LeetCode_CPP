class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> c;
        for(auto x:nums)
        {
            if(c.find(x)!=c.end())
            {
                return true;
            }
            c.insert(x);
        }
        return false;
    }
};