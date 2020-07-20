#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0, j = height.size() - 1, result = 0;
        while (i != j)
        {
            int f = (j - i) * min(height[i], height[j]);
            if (f > result)
                result = f;
            if (height[i] <= height[j])
                i++;
            else
                j--;
        }
        return result;
    }
};

int main()
{
    Solution s;
    int n[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    vector<int> nums(n, n + sizeof(n) / sizeof(int));
    cout << s.maxArea(nums) << endl;
    return 0;
}