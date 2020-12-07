#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size(), result = 0;
        if (size == 0)
            return 0;
        vector<int> dp1(size, 0), dp2(size, 0);
        dp1[0] = nums[0];
        if (size == 1)
            return dp1[0];
        dp1[1] = max(nums[0], nums[1]);
        if (size == 2)
            return dp1[1];
        dp2[1] = nums[1];
        dp2[2] = max(nums[1], nums[2]);
        for (int i = 2; i < size; i++)
        {
            if (i > 2)
                dp2[i] = max(dp2[i - 2] + nums[i], dp2[i - 1]);
            if (i != size - 1)
                dp1[i] = max(dp1[i - 2] + nums[i], dp1[i - 1]);
            else
                dp1[i] = max(dp2[i - 2] + nums[i], dp1[i - 1]);
        }
        return dp1[size - 1];
    }
};

int main()
{
    return 0;
}