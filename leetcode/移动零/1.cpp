#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int count = 0, size = nums.size();
        for (int i = 0; i < size; i++)
        {
            if (nums[i])
                nums[count++] = nums[i];
        }
        for (int i = count; i < size; i++)
        {
            nums[i] = 0;
        }
    }
};

int main()
{
    Solution s;
    int n[] = {0, 1, 0, 3, 12};
    int target = 5;
    vector<int> nums(n, n + sizeof(n) / sizeof(int));
    s.moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ", ";
    }
    cout << endl;
    return 0;
}