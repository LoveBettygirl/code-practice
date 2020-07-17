#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        vector<int> temp(nums.size());
        temp[0] = nums[0];
        int result = temp[0];
        for (int i = 1; i < temp.size(); i++)
        {
            temp[i] = max(temp[i - 1] + nums[i], nums[i]);
            result = max(temp[i], result);
        }
        return result;
    }
};

int main()
{
    Solution s;
    int n[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> nums(n, n + sizeof(n) / sizeof(int));
    cout << s.maxSubArray(nums) << endl;
    return 0;
}