#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int size = nums.size(), low = 0, high = size, mid;
        // [low, high]：返回结果所在的范围
        if (size == 0)
            return 0;
        mid = low + (high - low) / 2;
        // 要返回的是：被搜索的值的后面那个值
        while (low < high)
        {
            if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid;
            mid = low + (high - low) / 2;
        }
        return low;
    }
};

int main()
{
    return 0;
}