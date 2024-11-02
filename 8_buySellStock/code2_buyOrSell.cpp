// Stock Buy & Sell: In this problem first we buy stock with min price and then sell it with max price.

// LeetCode Problem 121 :-

#include<iostream>
#include<vector>
using namespace std;

    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, bestBuy = prices[0];

        for(int i=1; i<prices.size(); i++){
            if(prices[i] > bestBuy){
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }

        return maxProfit;
    }

int main(){
    // You are given an array prices where prices[i] is the price of a given stock n the (i)th day.
    vector<int> prices = {7,1,5,3,6,4};             // Stock Prices ==> index(i) = day
    // vector<int> prices = {7,6,4,3,1};

    int ans = maxProfit(prices);
    cout << "Maximum Profit = " << ans << endl;


    return 0;
}

