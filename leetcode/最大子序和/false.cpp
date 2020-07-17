#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int result = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sum += nums[j];
                if (sum > result)
                    result = sum;
            }
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