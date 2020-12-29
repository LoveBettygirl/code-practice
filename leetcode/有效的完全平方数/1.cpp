#include <iostream>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1, r = num / 2 + 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            long long res = (long long)mid * mid;
            if (res == num)
                return true;
            else if (res < num)
                l = mid + 1;
            else if (res > num)
                r = mid - 1;
        }
        return false;
    }
};

int main()
{
    return 0;
}