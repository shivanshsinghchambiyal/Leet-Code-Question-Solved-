class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=0;
        int minprice=prices[0];
        for (int i=0;i<n;i++)
        {
            // for(int j=i+1;j<n;j++)
            // {
            //      int profit=prices[j]-prices[i];
            //      maxprofit=max(maxprofit,profit);
            // }
            maxprofit=max(maxprofit,prices[i]-minprice);
            minprice=min(minprice,prices[i]);

        }
        return maxprofit;
        
    }
};