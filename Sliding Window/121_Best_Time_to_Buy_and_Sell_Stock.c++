// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        int maxp = 0 , p = INT_MAX;
        for (auto &i : prices)
        { 
            p = min(p,i);
            maxp = max(i-p,maxp);
       
        }
        return maxp;
    }
};

//using 2 pointer

class Solution {
public:
    int maxProfit(vector<int>& p) {
        int l=0;
        int r=1;
        int m=0;
        while(r<p.size()){
            if(p[r]-p[l]<0){
                l=r;
                r++;

            }
            else{
                m=max(m,(p[r]-p[l]));
                r++;
            }
        }
        return m;
    }
};