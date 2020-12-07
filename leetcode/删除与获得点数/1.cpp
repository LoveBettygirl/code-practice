#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int deleteAndEarn(vector<int> &nums)
    {
        int maxPoint = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > maxPoint)
                maxPoint = nums[i];
        }
        vector<int> points(maxPoint + 1, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            points[nums[i]]++;
        }
        int size = points.size(), result = 0;
        vector<int> dp(size, 0);
        if (size == 1)
            return 0;
        dp[1] = points[1];
        for (int i = 2; i < size; i++)
        {
            dp[i] = max(dp[i - 2] + i * points[i], dp[i - 1]);
        }
        return dp[size - 1];
    }
};

int main()
{
    return 0;
}