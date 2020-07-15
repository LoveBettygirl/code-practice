#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m.insert(pair<int, int>(nums[i], i));
        }
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            unordered_map<int, int>::iterator j = m.find(target - nums[i]);
            if (j != m.end() && j->second != i)
            {
                result.push_back(i);
                result.push_back(j->second);
                break;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    int n[] = {3, 2, 4};
    int target = 6;
    vector<int> nums(n, n + sizeof(n) / sizeof(int));
    vector<int> result = s.twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ", ";
    }
    cout << endl;
    return 0;
}