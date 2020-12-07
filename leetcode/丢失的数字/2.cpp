#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int size = nums.size(), sum1 = 0, sum2 = 0;
        sum2 = (size + 1) * size / 2;
        for (int i = 0; i < size; i++)
        {
            sum1 += nums[i];
        }
        return sum2 - sum1;
    }
};

int main()
{
    return 0;
}