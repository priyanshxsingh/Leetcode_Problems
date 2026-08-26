class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ls=0, rs=arr.size()-1;
        int mid= ls+(rs-ls)/2;
        while(ls<rs){
            if(arr.at(mid)<arr.at(mid+1)){
                ls=mid+1;
            } else {
                rs=mid;
            }
            mid= ls+(rs-ls)/2;
        }
        return ls;
    }
};