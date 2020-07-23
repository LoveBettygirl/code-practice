#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector< vector<int> > threeSum(vector<int> &nums)
    {
        unordered_map<int, int> m;
        vector< vector<int> > result;
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            m[nums[i]] = i;
        }
        for (int i = 0; i < size - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < size; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                unordered_map<int, int>::iterator target = m.find(-(nums[i] + nums[j]));
                if (target != m.end())
                {
                    if (target->second > j)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(target->first);
                        result.push_back(temp);
                    }
                }
            }
        }
        return result;
    }
};

int main()
{
    return 0;
}