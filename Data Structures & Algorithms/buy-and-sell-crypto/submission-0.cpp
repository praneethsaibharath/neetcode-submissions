class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i = 0;
        int j = 0;
        int maxprofit = 0;
        while(j<n){
            if(prices[j]>prices[i]){maxprofit = max(prices[j]-prices[i],maxprofit);}
            else{i=j;}
            j++;
        }
    return maxprofit;
    }
};
