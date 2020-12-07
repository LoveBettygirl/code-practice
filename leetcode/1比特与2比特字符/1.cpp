#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isOneBitCharacter(vector<int> &bits)
    {
        int i;
        for (i = 0; i < bits.size() - 1;)
        {
            if (bits[i] == 1)
                i += 2;
            else
                i++;
        }
        return i == bits.size() - 1;
    }
};

int main()
{
    return 0;
}