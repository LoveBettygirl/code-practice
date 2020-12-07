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
            for (int j = i; j > 0; j--)
                result[j] = result[j - 1] + result[j];
        }
        return result;
    }
};

int main()
{
    return 0;
}