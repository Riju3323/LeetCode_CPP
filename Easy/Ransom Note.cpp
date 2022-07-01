class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> a(26,0);
        vector<int> b(26,0);
        int c;
        for(int i=0;i<ransomNote.length();i++)
        {
            c = ransomNote[i];
            a[c-97]++;
        }
        for(int i=0;i<magazine.length();i++)
        {
            c = magazine[i];
            b[c-97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]>b[i])
            {
                return false;
            }
        }
        return true;
    }
};