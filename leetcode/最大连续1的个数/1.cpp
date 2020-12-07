#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int size = nums.size();
        if (size == 0)
            return 0;
        int count = 0, maxCount;
        maxCount = count;
        for (int i = 0; i < size; i++)
        {
            if (nums[i] == 1)
                count++;
            else if (i > 0 && nums[i] == 0 && nums[i - 1] == 1)
            {
                maxCount = max(maxCount, count);
                count = 0;
            }
        }
        return max(maxCount, count);
    }
};

int main()
{
    return 0;
}