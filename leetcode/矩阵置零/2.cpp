#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    void setZeroes(vector< vector<int> > &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        set<int> row, col;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for (set<int>::iterator i = row.begin(); i != row.end(); i++)
        {
            for (int j = 0; j < n; j++)
                matrix[*i][j] = 0;
        }
        for (set<int>::iterator i = col.begin(); i != col.end(); i++)
        {
            for (int j = 0; j < m; j++)
                matrix[j][*i] = 0;
        }
    }
};

int main()
{
    return 0;
}