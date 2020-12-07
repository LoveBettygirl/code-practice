#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int i, size = nums.size();
        for (i = 1; i < size; i++)
        {
            if (nums[i] < nums[i - 1])
                break;
        }
        return i >= size ? nums[0] : nums[i];
    }
};

int main()
{
    return 0;
}