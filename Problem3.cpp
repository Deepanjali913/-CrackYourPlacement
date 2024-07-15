//Leetcode 121 
// Best time to buy and sell stock
class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int profit = 0 ; 
        for(int i=1 ; i<n ;i++){
            if(prices[i]>mini){
               
                profit =max(profit , prices[i]-mini);
            }
            else{
                 mini = prices[i];

            }

        }
        return profit;
      
    }
};