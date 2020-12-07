#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int p1 = 0, p2 = numbers.size() - 1;
        vector<int> result;
        while (p1 < p2)
        {
            int sum = numbers[p1] + numbers[p2];
            if (sum < target)
                p1++;
            else if (sum > target)
                p2--;
            else
            {
                result.push_back(p1 + 1);
                result.push_back(p2 + 1);
                break;
            }
        }
        return result;
    }
};

int main()
{
    return 0;
}