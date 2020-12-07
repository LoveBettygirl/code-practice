#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int size = nums.size(), count = 0;
        for (int i = 0; i < size; i++)
        {
            if (nums[i] != val)
                nums[count++] = nums[i];
        }
        return count;
    }
};

int main()
{
    return 0;
}