#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int i = 0, j = 0;
        int size = nums.size();
        for (i = 0; i < size; i++)
        {
            if (nums[i] == 0)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }
        for (i = j; i < size; i++)
        {
            if (nums[i] == 1)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main()
{
    return 0;
}