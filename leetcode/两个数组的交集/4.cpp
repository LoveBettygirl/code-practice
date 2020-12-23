#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    int binarySearch(vector<int> &nums, int target)
    {
        int l = 0, r = nums.size() - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                l = mid + 1;
            else if (nums[mid] > target)
                r = mid - 1;
        }
        return -1;
    }
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        set<int> s;
        sort(nums2.begin(), nums2.end());
        for (int i = 0; i < nums1.size(); i++)
        {
            int target = binarySearch(nums2, nums1[i]);
            if (target >= 0)
                s.insert(nums1[i]);
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