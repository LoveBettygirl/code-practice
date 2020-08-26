#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        vector<int> fmax(nums.size());
        vector<int> fmin(nums.size());
        fmax[0] = nums[0];
        fmin[0] = nums[0];
        int result = max(fmax[0], fmin[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            fmax[i] = max(max(fmax[i - 1] * nums[i], fmin[i - 1] * nums[i]), nums[i]);
            fmin[i] = min(min(fmax[i - 1] * nums[i], fmin[i - 1] * nums[i]), nums[i]);
            result = max(max(fmax[i], fmin[i]), result);
        }
        return result;
    }
};

int main()
{
    Solution s;
    int n[] = {2, 3, -2, 4};
    vector<int> nums(n, n + sizeof(n) / sizeof(int));
    cout << s.maxProduct(nums) << endl;
    return 0;
}