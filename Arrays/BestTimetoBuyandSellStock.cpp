#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mini = prices[0];
    int profit = 0;
    int n = prices.size();

    for(int i = 1; i < n ; i++){
        mini = min(mini, prices[i]);
        int diff = prices[i] - mini;
        profit = max(profit, diff);
    }

    return profit;
}