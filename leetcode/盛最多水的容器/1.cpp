#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int result = 0, size = height.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                int f = (j - i) * min(height[i], height[j]);
                if (f > result)
                    result = f;
            }
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