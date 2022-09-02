class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int maxlen = 0;
        for(auto &i: s){
            if(!s.count(i - 1)){
                int l = 1; 
                while(s.count(i+l))
                   l++;
                maxlen = max(maxlen,l);
            } 

        }
        return maxlen;
    }
};