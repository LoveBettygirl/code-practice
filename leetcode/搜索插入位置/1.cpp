#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int size = nums.size();
        if (target <= nums[0])
            return 0;
        int i;
        for (i = 1; i < size; i++)
        {
            if (nums[i - 1] < target && nums[i] >= target)
                return i;
        }
        return i;
    }
};

int main()
{
    return 0;
}