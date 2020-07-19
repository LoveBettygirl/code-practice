#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> result;
        vector<bool> temp(nums.size(), false);
        for (int i = 0; i < nums.size(); i++)
        {
            temp[nums[i] - 1] = true;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (!temp[i])
                result.push_back(i + 1);
        }
        return result;
    }
};

int main()
{
    Solution s;
    int n[] = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> nums(n, n + sizeof(n) / sizeof(int));
    vector<int> result = s.findDisappearedNumbers(nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ", ";
    }
    cout << endl;
    return 0;
}