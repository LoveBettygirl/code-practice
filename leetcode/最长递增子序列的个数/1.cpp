#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findNumberOfLIS(vector<int> &nums)
    {
        int size = nums.size(), num = 1, result = 0;
        if (!size)
            return 0;
        vector<int> dp(nums.size(), 1);
        vector<int> counter(nums.size(), 1);
        for (int i = 1; i < size; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[j] < nums[i])
                {
                    if (dp[j] + 1 > dp[i])
                    {
                        dp[i] = dp[j] + 1;
                        counter[i] = counter[j];
                    }
                    else if (dp[j] + 1 == dp[i])
                        counter[i] += counter[j];
                }
            }
            if (dp[i] > num)
                num = dp[i];
        }
        for (int i = 0; i < size; i++)
        {
            if (dp[i] == num)
                result += counter[i];
        }
        return result;
    }
};

int main()
{
    return 0;
}