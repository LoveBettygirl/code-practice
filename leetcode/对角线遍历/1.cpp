#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> findDiagonalOrder(vector< vector<int> > &matrix)
    {
        int m = matrix.size();
        vector<int> result;
        if (!m)
            return result;
        int n = matrix[0].size();
        if (!n)
            return result;
        bool right = false;
        // m + n - 1: 对角线条数
        for (int i = 0; i < m + n - 1; i++)
        {
            if (right)
            {
                int j = i >= n ? i - n + 1 : 0;
                for (; j <= i && j < m; j++)
                    result.push_back(matrix[j][i - j]);
            }
            else
            {
                int j = i >= m ? i - m + 1 : 0;
                for (; j <= i && j < n; j++)
                    result.push_back(matrix[i - j][j]);
            }
            right = !right;
        }
        return result;
    }
};

int main()
{
    return 0;
}