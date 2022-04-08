class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int cp=0;
        for(int i=0;i<prices.size();++i)
        {
            if(prices[i]<min)
                min=prices[i];
            else{
                if(prices[i]-min>cp)
                    cp=prices[i]-min;
            }
        }
        return cp;
        
    }
};