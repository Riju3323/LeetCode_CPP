class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> ss;
        int fst = 0,slw = 0;
        int res = 0;
        while(fst<s.size())
        {
            if(ss.find(s[fst])==ss.end())
            {
                ss.insert(s[fst]);
                res = max(res,fst-slw+1);
                fst++;
            }
            else{
                ss.erase(s[slw]);
                slw++;            }

        }
        return res;
    }
};