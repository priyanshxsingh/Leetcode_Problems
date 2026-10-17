class Solution {
public:
    int smallestDivisor(vector<int> &nums, int limit) {
        if(nums.size()>limit){
            return -1;
        }
        int l=1, r=*max_element(nums.begin(), nums.end());
        while(l<=r){
            int mid=l+(r-l)/2;
            int sum=0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]%mid==0){
                    sum+=(nums[i]/mid);
                } else {
                    sum+=(nums[i]/mid)+1;
                }
            }
            if(sum<=limit){
                r=mid-1;
            } else {
                l=mid+1;
            }
        }
        return l;
    }
};