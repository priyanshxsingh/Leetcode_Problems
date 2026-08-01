class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0, mid=0, right=nums.size()-1;
        while(mid<=right){
            if(nums.at(mid)==2){
                swap(nums.at(mid), nums.at(right));
                right--;
            } else if(nums.at(mid)==0) {
                swap(nums.at(left), nums.at(mid));
                mid++;
                left++;
            } else {
                mid++;
            }
        }

    }
};