#include <iostream>
using namespace std;

class Solution
{
public:
    int arrangeCoins(int n)
    {
        long long sum = 0;
        int i = 1;
        while (sum + i <= n)
        {
            sum += i;
            i++;
        }
        return i - 1;
    }
};

int main()
{
    return 0;
}