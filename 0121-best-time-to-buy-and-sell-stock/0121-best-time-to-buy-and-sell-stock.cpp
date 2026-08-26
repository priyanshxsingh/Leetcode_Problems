class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = prices.at(0);
        int maxProfit=0;
        for(int i=0; i<prices.size(); i++){
            if(prices.at(i)-bestBuy>maxProfit){
                maxProfit=prices.at(i)-bestBuy;
            }

            if(bestBuy>prices.at(i)){
                bestBuy=prices.at(i);
            }
        }
        return maxProfit;
    }
};