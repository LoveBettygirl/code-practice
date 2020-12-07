#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    int binarySearch(int s, int l, int r, vector<int> &nums)
    {
        int mid;
        while (l < r)
        {
            mid = l + (r - l) / 2;
            if (nums[mid] < s)
                l = mid + 1;
            else
                r = mid;
        }
        return nums[l] >= s ? l : -1;
    }

public:
    int minSubArrayLen(int s, vector<int> &nums)
    {
        int size = nums.size(), result = INT_MAX;
        if (size == 0)
            return 0;
        vector<int> sums(size + 1, 0);
        for (int i = 1; i <= size; i++)
            sums[i] = sums[i - 1] + nums[i - 1];
        for (int i = 1; i <= size; i++)
        {
            int target = sums[i - 1] + s;
            int bound = binarySearch(target, i, size, sums);
            if (bound != -1)
                result = min(result, bound - (i - 1));
        }
        return result == INT_MAX ? 0 : result;
    }
};

int main()
{
    return 0;
}