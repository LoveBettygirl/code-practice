#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int result = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0 || nums[i - 1] != nums[i])
            {
                nums[result] = nums[i];
                result++;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    int n[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    vector<int> nums(n, n + sizeof(n) / sizeof(int));
    cout << s.removeDuplicates(nums) << endl;
    return 0;
}