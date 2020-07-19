#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int size = nums.size();
        unordered_map<int, int> m;
        for (int i = 0; i < size; i++)
        {
            m[nums[i]]++;
        }
        for (unordered_map<int, int>::iterator i = m.begin(); i != m.end(); i++)
        {
            if (i->second > size / 2)
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
    cout << s.majorityElement(nums) << endl;
    return 0;
}