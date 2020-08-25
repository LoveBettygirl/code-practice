#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution
{
public:
    set< vector<int> > s;
    int f(vector<int> &temp, vector<int> &candidates, int candidate, int target)
    {
        if (target <= 0)
        {
            return target;
        }
        int size = candidates.size();
        for (int i = 0; i < size; i++)
        {
            temp.push_back(candidates[i]);
            int ret = f(temp, candidates, candidates[i], target - candidates[i]);
            if (ret == 0)
            {
                vector<int> t = vector<int>(temp.begin(), temp.end());
                sort(t.begin(), t.end());
                s.insert(t);
            }
            temp.pop_back();
        }
        return target;
    }

    vector< vector<int> > combinationSum(vector<int> &candidates, int target)
    {
        int size = candidates.size();
        vector< vector<int> > result;
        for (int i = 0; i < size; i++)
        {
            vector<int> temp;
            temp.push_back(candidates[i]);
            int ret = f(temp, candidates, candidates[i], target - candidates[i]);
            if (ret == 0)
            {
                vector<int> t = vector<int>(temp.begin(), temp.end());
                sort(t.begin(), t.end());
                s.insert(t);
            }
        }
        result.assign(s.begin(), s.end());
        return result;
    }
};

int main()
{
    Solution s;
    int n[] = {2, 3, 6, 7};
    int target = 7;
    vector<int> nums(n, n + sizeof(n) / sizeof(int));
    s.combinationSum(nums, target);
    return 0;
}