class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> solution;

        int left = 0, top = 0, right = matrix[0].size()-1, bottom = matrix.size()-1;

        while (left<=right && top<=bottom)
        {
            for (int i = left; i <= right ; i++)
            {
                solution.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom ; i++)
            {
                solution.push_back(matrix[i][right]);
            }
            right--;
            if (bottom>=top)
            {
                for (int i = right; i >= left; i--)
                {
                    solution.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (right>=left)
            {
                for (int i = bottom; i >= top; i--)
                {
                    solution.push_back(matrix[i][left]);
                }
                left++;
            }
        } 
        return solution;
    }
};