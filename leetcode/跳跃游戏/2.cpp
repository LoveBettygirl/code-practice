#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int size = nums.size();
        int maxPos = 0;
        for (int i = 0; i < size; i++)
        {
            if (i + nums[i] > maxPos)
                maxPos = i + nums[i];
            if (maxPos >= size - 1)
                return true;
            if (nums[i] == 0 && maxPos <= i)
                return false;
        }
        return false;
    }
};

int main()
{
    Solution s;
    int n[] = {3, 2, 1, 0, 4};
    vector<int> nums(n, n + sizeof(n) / sizeof(int));
    cout << s.canJump(nums) << endl;
    return 0;
}