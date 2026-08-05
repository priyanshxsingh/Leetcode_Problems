class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int rs=nums.size();
        int pivot= -1;
        for(int i=rs-2; i>=0; i--){
            if(nums.at(i)<nums.at(i+1)){
                pivot=i;
                break;
            }
        }
        if(pivot== -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i=rs-1; i>pivot; i--){
            if(nums.at(pivot)<nums.at(i)){
                swap(nums.at(pivot), nums.at(i));
                break;
            }
        }
        for(int i=0; i<(rs-1-pivot)/2; i++){
            swap(nums.at(rs-i-1), nums.at(pivot+1+i));
        }

    }
};