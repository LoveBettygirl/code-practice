#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int lsum = 0, rsum = 0, size = nums.size();
        for (int i = 0; i < size; i++)
            rsum += nums[i];
        for (int i = 0; i < size; i++)
        {
            int temp = nums[i];
            rsum -= temp;
            if (lsum == rsum)
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