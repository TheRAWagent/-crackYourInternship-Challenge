#include<bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,mini=INT_MAX;
        for(int i=1;i<prices.size();i++)
        {
            mini=min(mini,prices[i-1]);
            profit=max(profit,prices[i]-mini);
        }
        return profit;
    }
};