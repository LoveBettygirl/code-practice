#include <iostream>
using namespace std;

class Solution
{
public:
    bool judgeCircle(string moves)
    {
        int size = moves.length();
        int x = 0, y = 0;
        for (int i = 0; i < size; i++)
        {
            if (moves[i] == 'U')
                y--;
            else if (moves[i] == 'D')
                y++;
            else if (moves[i] == 'L')
                x--;
            else if (moves[i] == 'R')
                x++;
        }
        return x == 0 && y == 0;
    }
};

int main()
{
    return 0;
}