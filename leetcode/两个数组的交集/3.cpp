#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        set<int> s;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                s.insert(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
                i++;
            else
                j++;
        }
        for (set<int>::iterator i1 = s.begin(); i1 != s.end(); i1++)
            result.push_back(*i1);
        return result;
    }
};

int main()
{
    return 0;
}