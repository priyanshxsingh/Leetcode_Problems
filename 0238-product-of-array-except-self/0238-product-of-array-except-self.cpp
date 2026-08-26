class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> newArr(n);
        newArr.at(0)=1;
        for(int i=1; i<n; i++){
            newArr.at(i)=newArr.at(i-1)*nums.at(i-1);
        }
        int product=1;
        for(int i=n-1; i>=0; i--){
            newArr.at(i)=newArr.at(i)*product;
            product*=nums.at(i);
        }
        return newArr;
    }
};