class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int m1=m-1, n1=n-1;
        int a = m+n-1;
        while(m1 >=0 && n1>=0){
            if(nums1.at(m1)>nums2.at(n1)){
                nums1.at(a)=nums1.at(m1);
                m1--;
            } else {
                nums1.at(a)=nums2.at(n1);
                n1--;
            }
            a--;
        }
        while(n1>=0){
            nums1.at(a)=nums2.at(n1);
            n1--;
            a--;
        }
    }
};