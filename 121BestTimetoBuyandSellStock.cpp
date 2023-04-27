class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int ourmin=INT_MAX;
        int ans=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            ourmin=min(ourmin,prices[i]);
            ans=max(ans,prices[i]-ourmin);
        }
        return ans;
        
    }
};