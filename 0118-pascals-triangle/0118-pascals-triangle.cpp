class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> pt;

        pt.push_back({1});

        for (int i = 1; i < numRows; i++)
        {
            vector<int> row;

            row.push_back(1);

            for (int j = 1; j <= i / 2; j++)
            {
                row.push_back(
                    pt[i - 1][j - 1] + pt[i - 1][j]
                );
            }

            int start = (i - 1) / 2;

            for (int j = start; j >= 0; j--)
            {
                row.push_back(row[j]);
            }

            pt.push_back(row);
        }

        return pt;
    }
};