class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0, a;
        for(int i=0; i<nums.size(); i++){
            if(freq==0){
                a=nums.at(i);
            }
            if(a==nums.at(i)){
                freq++;
            } else {
                freq--;
            }
        }
        return a;
    }
};