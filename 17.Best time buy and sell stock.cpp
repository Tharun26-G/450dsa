#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
   int valley = INT_MAX;
        int profit = 0;
        for(int i = 0; i < n; i++){
            if(prices[i] < valley){
                valley = prices[i];
            }else if(prices[i] - valley > profit){
                profit = prices[i] - valley;
            }
        }
        return profit;
}
