#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int red = 0, white = 0, blue = 0;
        int i;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                red++;
            else if (nums[i] == 1)
                white++;
            else if (nums[i] == 2)
                blue++;
        }
        for (i = 0; i < red; i++)
        {
            nums[i] = 0;
        }
        for (; i < red + white; i++)
        {
            nums[i] = 1;
        }
        for (; i < red + white + blue; i++)
        {
            nums[i] = 2;
        }
    }
};

int main()
{
    return 0;
}