#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        for (map<int, int>::iterator i = m.begin(); i != m.end(); i++)
        {
            if (i->second == 1)
                return i->first;
        }
        return -1;
    }
};

int main()
{
    Solution s;
    int n[] = {2, 2, 1};
    vector<int> nums(n, n + sizeof(n) / sizeof(int));
    cout << s.singleNumber(nums) << endl;
    return 0;
}