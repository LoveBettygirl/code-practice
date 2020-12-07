#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int size = nums.size(), sum1 = 0, sum2 = 0;
        for (int i = 0; i <= size; i++)
        {
            if (i < size)
                sum1 += nums[i];
            sum2 += i;
        }
        return sum2 - sum1;
    }
};

int main()
{
    return 0;
}