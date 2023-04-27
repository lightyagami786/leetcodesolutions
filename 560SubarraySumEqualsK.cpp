class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> ourmap;

        int ans=0;
        int presum=0;
        int n=nums.size();
        ourmap[0]=1;
        for(int i=0;i<n;i++){
            presum+=nums[i];
            
            if(ourmap.count(presum-k)==1){
                ans+=ourmap[presum-k];
            }
            ourmap[presum]++;

        }
        return ans;

    }
};