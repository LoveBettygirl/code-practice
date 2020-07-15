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
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            unordered_map<int, int>::iterator j = m.find(target - nums[i]);
            if (j != m.end() && j->second != i)
            {
                result.push_back(j->second);
                result.push_back(i);
                break;
            }
            m.insert(pair<int, int>(nums[i], i));
        }
        return result;
    }
};

int main()
{
    Solution s;
    int n[] = {2, 2, 3, 4, 5};
    int target = 5;
    vector<int> nums(n, n + sizeof(n) / sizeof(int));
    vector<int> result = s.twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ", ";
    }
    cout << endl;
    return 0;
}