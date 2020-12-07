#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    int countBinarySubstrings(string s)
    {
        int size = s.length(), first = 0, end = 0, sum = 0;
        vector<int> nums;
        for (int i = 0; i <= size; i++)
        {
            if (i == 0 || i == size || s[i] != s[i - 1])
            {
                if (i > 0)
                    nums.push_back(end - first);
                first = end = i;
            }
            end++;
        }
        for (int i = 1; i < nums.size(); i++)
        {
            sum += min(nums[i], nums[i - 1]);
        }
        return sum;
    }
};

int main()
{
    return 0;
}