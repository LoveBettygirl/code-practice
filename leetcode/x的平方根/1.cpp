#include <iostream>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        int l = 1, r = x;
        while (l < r)
        {
            int mid = l + (r - l + 1) / 2;
            long long result = (long long)mid * (long long)mid;
            if (result <= x)
                l = mid;
            else if (result > x)
                r = mid - 1;
        }
        return min(l, r);
    }
};

int main()
{
    return 0;
}