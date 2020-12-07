#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int size = numbers.size();
        vector<int> result;
        for (int i = 0; i < size; i++)
        {
            int low = i + 1, high = size - 1, mid;
            while (low <= high)
            {
                mid = (low + high) / 2;
                int sum = numbers[i] + numbers[mid];
                if (sum > target)
                    high = mid - 1;
                else if (sum < target)
                    low = mid + 1;
                else
                {
                    result.push_back(i + 1);
                    result.push_back(mid + 1);
                    return result;
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