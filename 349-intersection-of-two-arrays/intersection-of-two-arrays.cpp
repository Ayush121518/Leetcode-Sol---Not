class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> mp;
        vector<int> ans;
        unordered_set<int> s;

        for(int x: nums1)
        {
            mp[x] = 1;
        }

        for(int x: nums2)
        {
            if(mp.find(x)!=mp.end())
            {
                s.insert(x);
            }
        }

        for(const int& x: s)
        {
            ans.push_back(x);
        }

        return ans;
    }
};