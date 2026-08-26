class Solution {
public:
    double myPow(double x, int n) {
        if(x==1 || n==0){
            return 1.0;
        }
        if(x==0){
            return 0.0;
        }
        if(x== -1){
            if(n%2==0){
                return 1.0;
            } else {
                return -1.0;
            }
        }
        long power = n;
        if(n<0){
            power = -power;
            x=1/x;
        }
        double ans=1;
        while(power>0){
            if(power%2==1){
                ans*=x;
            }
            x*=x;
            power/=2;
        }
        return ans;
    }
};