class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;

        vector<int> ans;

        for(int i=0;i<nums1.size();i++)
        {
            mp1[nums1[i]]++;
        }

        for(int i=0;i<nums2.size();i++)
        {
            mp2[nums2[i]]++;
        }

        for( auto it: mp1)
        {
            if(mp2.find(it.first)!=mp2.end())
            {
                if(mp1[it.first]<=mp2[it.first])
                {
                    for(int i=0;i<mp1[it.first];i++)
                    {
                        ans.push_back(it.first);
                    }
                }
                 else{
                        for(int i=0;i<mp2[it.first];i++)
                        {
                            ans.push_back(it.first);
                        }
                 }   
            }
        }

        return ans;

    }
};