#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        vector<int> temp(nums);
        int count = 0, first = 0, last = 0;
        sort(temp.begin(), temp.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != temp[i])
            {
                if (count == 0)
                    first = i;
                last = i;
                count++;
            }
        }
        return count ? last - first + 1 : 0;
    }
};

int main()
{
    Solution s;
    int n[] = {2, 3, 3, 2, 4};
    vector<int> nums(n, n + sizeof(n) / sizeof(int));
    cout << s.findUnsortedSubarray(nums) << endl;
    return 0;
}