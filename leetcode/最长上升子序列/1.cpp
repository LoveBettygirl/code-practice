#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int size = nums.size(), result = 1;
        if (!size)
            return 0;
        vector<int> dp(nums.size(), 1);
        for (int i = 1; i < size; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[j] < nums[i])
                    dp[i] = max(dp[i], dp[j] + 1);
            }
            if (dp[i] > result)
                result = dp[i];
        }
        return result;
    }
};

int main()
{
    return 0;
}