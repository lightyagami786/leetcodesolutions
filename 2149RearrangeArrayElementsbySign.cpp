class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> vec(n,0);
        int pi=0;
        int ni=1;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                vec[pi]=nums[i];
                pi=pi+2;
            }else{
                vec[ni]=nums[i];
                ni=ni+2;
            }
        }

        return vec;
    }
};