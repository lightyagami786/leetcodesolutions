// optimised one
class Solution {
public:
    int bulbSwitch(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){

            int sr=sqrt(i);
            if(sr*sr==i)cnt++;


        }
        return cnt;
    }
};