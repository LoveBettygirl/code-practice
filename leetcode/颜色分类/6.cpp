#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int i = 0;
        int size = nums.size();
        int p0 = 0, p2 = size - 1;
        while (i <= p2)
        {
            if (nums[i] == 0)
            {
                swap(nums[i], nums[p0]);
                p0++;
                i++;
            }
            else if (nums[i] == 1)
            {
                i++;
            }
            else if (nums[i] == 2)
            {
                swap(nums[i], nums[p2]);
                p2--;
            }
        }
    }
};

int main()
{
    return 0;
}