#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int findShortestSubArray(vector<int> &nums)
    {
        int size = nums.size(), deg = 0, minlen = size;
        unordered_map<int, int> m, left, right;
        for (int i = 0; i < size; i++)
        {
            if (m.find(nums[i]) == m.end())
                left[nums[i]] = i;
            m[nums[i]]++;
            right[nums[i]] = i;
            int curr = m[nums[i]];
            if (curr > deg)
            {
                deg = curr;
                minlen = right[nums[i]] - left[nums[i]] + 1;
            }
            else if (curr == deg)
            {
                int temp = right[nums[i]] - left[nums[i]] + 1;
                if (temp < minlen)
                    minlen = temp;
            }
        }
        return minlen;
    }
};

int main()
{
    return 0;
}