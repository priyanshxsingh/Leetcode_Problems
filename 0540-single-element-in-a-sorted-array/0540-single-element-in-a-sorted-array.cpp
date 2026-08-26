class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();

        if(n==1) return nums.at(0);
        

        int s=0, e=n-1;
        while(s<=e){
            int mid = s+(e-s)/2;

            if(mid==0 && nums.at(0)!=nums.at(1)) return nums.at(0);
            if(mid==n-1 && nums.at(n-1)!=nums.at(n-2)) return nums.at(n-1);

            if(nums.at(mid)!=nums.at(mid-1) && nums.at(mid)!=nums.at(mid+1)) return nums.at(mid);

            if(mid%2==0){
                if(nums.at(mid)==nums.at(mid-1)){
                    e=mid-1;
                } else {
                    s=mid+1;
                }
            } else {
                if(nums.at(mid)==nums.at(mid-1)){
                    s=mid+1;
                } else {
                    e=mid-1;
                }
            }
        }
        return -1;
    }
};