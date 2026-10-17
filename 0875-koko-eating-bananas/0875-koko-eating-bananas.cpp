
class Solution {
public:
    int minEatingSpeed(vector<int> nums, int h) {
        if (nums.size() > h) {
            return -1;
        }

        int l = 1;
        int r = *max_element(nums.begin(), nums.end());

        while (l <= r) {
            int mid = l + (r - l) / 2;
            long long sum = 0;

            for (int i = 0; i < nums.size(); i++) {
                sum += (nums[i] + mid - 1LL) / mid;
            }

            if (sum <= h) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return l;
    }
};
