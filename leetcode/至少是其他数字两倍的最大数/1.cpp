#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int size = nums.size();
        if (size == 1)
            return 0;
        int max1 = INT_MIN, max2 = INT_MIN, i1 = 0;
        for (int i = 0; i < size; i++)
        {
            if (nums[i] > max1)
            {
                max1 = nums[i];
                i1 = i;
            }
        }
        for (int i = 0; i < size; i++)
        {
            if (i != i1 && nums[i] > max2)
                max2 = nums[i];
        }
        return max1 >= max2 * 2 ? i1 : -1;
    }
};

int main()
{
    return 0;
}