#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int m, n;
    void findIslands(vector< vector<char> > &grid, int x, int y)
    {
        grid[x][y] = '0';
        if (x > 0 && grid[x - 1][y] == '1')
            findIslands(grid, x - 1, y);
        if (x < m - 1 && grid[x + 1][y] == '1')
            findIslands(grid, x + 1, y);
        if (y > 0 && grid[x][y - 1] == '1')
            findIslands(grid, x, y - 1);
        if (y < n - 1 && grid[x][y + 1] == '1')
            findIslands(grid, x, y + 1);
    }
    int numIslands(vector< vector<char> > &grid)
    {
        int num = 0;
        m = grid.size();
        if (!m)
            return num;
        n = grid[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '1')
                {
                    findIslands(grid, i, j);
                    num++;
                }
            }
        }
        return num;
    }
};

int main()
{
    return 0;
}