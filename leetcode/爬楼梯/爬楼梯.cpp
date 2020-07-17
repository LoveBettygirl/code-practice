#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 0 || n == 1 || n == 2)
            return n;
        vector<int> result(n + 1);
        result[0] = 0;
        result[1] = 1;
        result[2] = 2;
        for (int i = 3; i <= n; i++)
        {
            result[i] = result[i - 1] + result[i - 2];
        }
        return result[n];
    }
};

int main()
{
    cout << Solution().climbStairs(3) << endl;
}