#include <iostream>
using namespace std;

class Solution
{
public:
    int arrangeCoins(int n)
    {
        int l = 1, r = n;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            long long result = (long long)mid * (mid + 1) / 2;
            if (result == n)
                return mid;
            else if (result > n)
                r = mid - 1;
            else if (result < n)
                l = mid + 1;
        }
        return r;
    }
};

int main()
{
    return 0;
}