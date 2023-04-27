class Solution {
public:
    int toggle(int value){
        if(value==0){
            return 1;
        }else{
            return 0;
        }
    }
    int bulbSwitch(int n) {
        vector<int> arr(n,1);

        for(int i=1;i<n;i++){

            int  j=i;
            
            while(j<n){
                arr[j]=toggle(arr[j]);
                j=j+i+1;
            }


        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                ans+=1;
            }
        }
        return ans;
    }
};