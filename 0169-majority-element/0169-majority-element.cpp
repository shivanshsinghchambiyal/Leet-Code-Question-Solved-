class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int max=0;
        unordered_map<int,int>mp;
        for(int x:nums)
        {
            mp[x]++;
        } 
        for(auto it : mp)
        {
               if(it.second > max)
               {
                max=it.second;
                ans=it.first;
               }
        }
        return ans;
    }
};