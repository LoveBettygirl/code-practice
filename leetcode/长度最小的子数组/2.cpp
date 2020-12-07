#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int s, vector<int> &nums)
    {
        int size = nums.size();
        if (size == 0)
            return 0;
        int i = 0, j = 0, sum = 0, result = INT_MAX;
        for (; i < size; i++)
        {
            while (j < size && sum < s)
                sum += nums[j++];
            result = sum >= s ? min(result, j - i) : result;
            sum -= nums[i];
        }
        return result == INT_MAX ? 0 : result;
    }
};

int main()
{
    return 0;
}