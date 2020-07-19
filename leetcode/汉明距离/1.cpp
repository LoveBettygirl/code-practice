#include <iostream>
using namespace std;
class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        unsigned temp = x ^ y;
        int result = 0;
        do
        {
            if ((temp & 0x1) == 1)
                result++;
            temp >>= 1;
        } while (temp != 0);
        return result;
    }
};

int main()
{
    cout << Solution().hammingDistance(1, 4) << endl;
}