#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> result(1, 1);
        for (int i = 1; i <= rowIndex; i++)
        {
            result.push_back(0);
            int left = result[0], right;
            for (int j = 1; j <= i; j++)
            {
                right = result[j];
                result[j] = left + right;
                left = right;
            }
        }
        return result;
    }
};

int main()
{
    return 0;
}