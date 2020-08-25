#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool found;
    int size;
    void f(vector<int> &nums, int pos)
    {
        int count = nums[pos];
        for (int i = 0; i <= count; i++)
        {
            if (found)
                return;
            if (pos + i == size - 1)
            {
                found = true;
                return;
            }
            if (pos + i > size - 1)
                continue;
            if (i == 0)
                continue;
            f(nums, pos + i);
        }
    }
    bool canJump(vector<int> &nums)
    {
        found = false;
        size = nums.size();
        f(nums, 0);
        return found;
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