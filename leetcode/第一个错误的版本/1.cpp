#include <iostream>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int l = 1, r = n;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            bool b1 = isBadVersion(mid), b0 = isBadVersion(mid - 1);
            if (b1 && !b0)
                return mid;
            else if (!b1 && !b0)
                l = mid + 1;
            else if (b1 && b0)
                r = mid - 1;
        }
        return -1;
    }
};

int main()
{
    return 0;
}