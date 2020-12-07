#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (m == 0)
        {
            for (int i = 0; i < n; i++)
                nums1[i] = nums2[i];
            return;
        }
        int curr1 = 0, curr2 = 0;
        while (curr2 < n)
        {
            if (nums1[curr1] <= nums2[curr2] && (curr1 == m - 1 || nums1[curr1 + 1] >= nums2[curr2]))
            {
                for (int i = m - 1; i > curr1; i--)
                    nums1[i + 1] = nums1[i];
                nums1[++curr1] = nums2[curr2++];
                m++;
            }
            else if (nums1[curr1] > nums2[curr2] && (curr1 == 0 || nums1[curr1 - 1] < nums2[curr2]))
            {
                for (int i = m - 1; i >= curr1; i--)
                    nums1[i + 1] = nums1[i];
                nums1[curr1] = nums2[curr2++];
                m++;
            }
            else
                curr1++;
        }
    }
};

int main()
{
    return 0;
}