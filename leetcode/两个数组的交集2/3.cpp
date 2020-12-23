#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() > nums2.size())
            return intersect(nums2, nums1);
        vector<int> result;
        unordered_map<int, int> m;
        for (int i = 0; i < nums1.size(); i++)
            m[nums1[i]]++;
        for (int i = 0; i < nums2.size(); i++)
        {
            if (m.find(nums2[i]) != m.end())
            {
                int count = m[nums2[i]];
                if (count > 0)
                {
                    result.push_back(nums2[i]);
                    m[nums2[i]]--;
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