class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> A;
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            int findNum = target-nums[i];
            if(A.find(findNum) != A.end()){
                result.push_back(i);
                result.push_back(A[findNum]);
            } else {
                A[nums[i]]=i;
            }
        }
        return result;
    }
};