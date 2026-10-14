class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int n = ransomNote.length();

        int m = magazine.length();

        if(n>m)
        {
            return false;
        }

        unordered_map<char,int> f1;

        unordered_map<char,int> f2;

        for(int i=0;i<n;i++)
        {
            f1[ransomNote[i]]++;
        }

        for(int i=0;i<m;i++)
        {
            f2[magazine[i]]++;
        }


        for(auto p: f1)
        {
            if(p.second != f2[p.first])
            {
                if(p.second>f2[p.first])
                {
                    return false;
                }
            }
        }

        return true;
    }
};