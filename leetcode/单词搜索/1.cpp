#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int size, m, n;
    bool found;
    vector< vector<bool> > visited;
    void findWord(vector< vector<char> > &board, string word, int pos, int x, int y)
    {
        if (found)
            return;
        if (visited[x][y])
            return;
        if (pos == size - 1)
        {
            found = true;
            return;
        }
        visited[x][y] = true;
        if (x > 0 && board[x - 1][y] == word[pos + 1])
            findWord(board, word, pos + 1, x - 1, y);
        if (x < m - 1 && board[x + 1][y] == word[pos + 1])
            findWord(board, word, pos + 1, x + 1, y);
        if (y > 0 && board[x][y - 1] == word[pos + 1])
            findWord(board, word, pos + 1, x, y - 1);
        if (y < n - 1 && board[x][y + 1] == word[pos + 1])
            findWord(board, word, pos + 1, x, y + 1);
        visited[x][y] = false;
    }
    bool exist(vector< vector<char> > &board, string word)
    {
        found = false;
        size = word.length();
        if (!size)
            return false;
        m = board.size();
        n = board[0].size();
        visited = vector< vector<bool> >(m, vector<bool>(n, false));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == word[0])
                {
                    findWord(board, word, 0, i, j);
                    if (found)
                        return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    return 0;
}