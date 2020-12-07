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
        unordered_map<int, int> m;
        for (int i = 0; i < size; i++)
        {
            m[nums[i]]++;
        }
        unordered_map<int, int>::iterator it;
        for (it = m.begin(); it != m.end(); it++)
        {
            if (it->second > deg)
                deg = it->second;
        }
        for (it = m.begin(); it != m.end(); it++)
        {
            if (it->second == deg)
            {
                int first, end;
                for (first = 0; nums[first] != it->first && first < size; first++)
                    ;
                for (end = size - 1; nums[end] != it->first && end >= 0; end--)
                    ;
                end = end - first + 1;
                if (end < minlen)
                    minlen = end;
            }
        }
        return minlen;
    }
};

int main()
{
    return 0;
}