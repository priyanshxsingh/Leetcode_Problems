class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();

        int el1 = 0, el2 = 1;
        int count1 = 0, count2 = 0;

        for (int x : nums)
        {
            if (x == el1)
            {
                count1++;
            }
            else if (x == el2)
            {
                count2++;
            }
            else if (count1 == 0)
            {
                el1 = x;
                count1 = 1;
            }
            else if (count2 == 0)
            {
                el2 = x;
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }

        // Verify candidates
        count1 = 0;
        count2 = 0;

        for (int x : nums)
        {
            if (x == el1)
                count1++;

            if (x == el2)
                count2++;
        }

        vector<int> ans;

        if (count1 > n / 3)
            ans.push_back(el1);

        if (count2 > n / 3)
            ans.push_back(el2);

        return ans;
    }
};