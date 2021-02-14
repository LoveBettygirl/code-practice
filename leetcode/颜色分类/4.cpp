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
        int p0 = 0, p1 = 0;
        for (i = 0; i < size; i++)
        {
            if (nums[i] == 0)
            {
                swap(nums[i], nums[p0]);
                if (p0 < p1)
                    swap(nums[i], nums[p1]);
                p0++;
                p1++;
            }
            else if (nums[i] == 1)
            {
                swap(nums[i], nums[p1]);
                p1++;
            }
        }
    }
};

int main()
{
    return 0;
}