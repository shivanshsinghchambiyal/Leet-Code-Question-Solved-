class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n=nums.size();
        
        // for (int i=0;i<n;i++)
        //  {
        //     for (int j=i+1;j<n;j++)
        //     {
        //         if (nums[i]+nums[j]==target)
        //         {
        //             return {i,j};
        //         }
        //     }
        //  }
        // return {};
        unordered_map<int,int>mp;
        int n=nums.size();
        for (int i=0;i<n;i++)
        {
            int a=target-nums[i];
            if (mp.find(a)!=mp.end())
            {
                return {mp[a],i};
            }
             mp[nums[i]]=i;
        }
        return {};
    }
};