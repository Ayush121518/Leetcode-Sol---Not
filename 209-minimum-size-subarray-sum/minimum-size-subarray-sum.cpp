class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i=0,j=0;
        int mini = INT_MAX;
        int sum = 0;
        bool flag = false;

        while(i<n)
        {
           if(sum<target)
           {
              if(j!=n)
              {
                 sum = sum+nums[j];
                 j++;
              }
              else{
                i++;
              }
           }
           else if(sum>=target)
           {
              mini = min(mini,(j-i));
              flag = true;
              sum = sum-nums[i];
              i++;
           }
        }

        if(flag)
        return mini;

        return 0;
    }
};