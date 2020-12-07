#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int lsum = 0, sum = 0, size = nums.size();
        for (int i = 0; i < size; i++)
            sum += nums[i];
        for (int i = 0; i < size; i++)
        {
            int temp = nums[i];
            if (lsum == sum - temp - lsum)
                return i;
            lsum += temp;
        }
        return -1;
    }
};

int main()
{
    return 0;
}