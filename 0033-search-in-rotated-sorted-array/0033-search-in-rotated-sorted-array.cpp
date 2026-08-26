class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ls=0, rs=nums.size()-1;
        while(ls<=rs){
            int mid= ls + (rs-ls)/2;
            if(target==nums.at(mid)){
                return mid;
            }
            if(nums.at(mid)>=nums.at(ls)){
                if(target<=nums.at(mid) && target>=nums.at(ls)){
                    rs=mid-1;
                } else {
                    ls=mid+1;
                }
            } else {
                if(target>=nums.at(mid) && target<=nums.at(rs)){
                    ls=mid+1;
                } else {
                    rs=mid-1;
                }
            }
        }
        return -1;
    }
};