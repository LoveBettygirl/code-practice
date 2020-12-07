#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void setZeroes(vector< vector<int> > &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        vector< vector<int> > result(m, vector<int>(n, 1));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    for (int k = 0; k < m; k++)
                        result[k][j] = 0;
                    for (int k = 0; k < n; k++)
                        result[i][k] = 0;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (result[i][j] == 1)
                {
                    result[i][j] = matrix[i][j];
                }
            }
        }
        matrix = result;
    }
};

int main()
{
    return 0;
}