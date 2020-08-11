#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int size = nums.size();
        bool found = false;
        for (int i = size - 1; i > 0; i--)
        {
            if (nums[i - 1] > nums[i])
                continue;
            int minlen = INT_MAX, ss = 0;
            for (int j = i; j < size; j++)
            {
                int temp = nums[j] - nums[i - 1];
                if (temp < minlen && temp > 0)
                {
                    minlen = temp;
                    found = true;
                    ss = j;
                }
            }
            if (found)
            {
                swap(nums[i - 1], nums[ss]);
                sort(nums.begin() + i, nums.end());
                break;
            }
        }
        if (!found)
            sort(nums.begin(),nums.end());
    }
};
int main()
{
    Solution s;
    int n[] = {5, 4, 7, 5, 3, 2};
    vector<int> nums(n, n + sizeof(n) / sizeof(int));
    s.nextPermutation(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << ", ";
    }
    cout << endl;
    return 0;
}