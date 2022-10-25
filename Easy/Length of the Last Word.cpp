class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int temp = 0;
        char c;
        for(int i=s.size()-1;i>=0;i--)
        {
            temp = int(tolower(s[i])) - 'a';
            if(temp<26 && temp>=0)
            {
                count++;
                if(i>0)
                {
                    temp = int(tolower(s[i-1])) - 'a';
                    if(temp<0 || temp>=26)
                    {
                        return count;
                    }
                }
            }
        }
        return count;
    }
};