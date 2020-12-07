#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int size = arr.size(), up = -1, down = -1;
        for (int i = 1; i < size; i++)
        {
            if (arr[i] > arr[i - 1] && up < 0)
                up = i - 1;
            else if (arr[i] < arr[i - 1] && down < 0)
                down = i - 1;
            else if (arr[i] == arr[i - 1] || (arr[i] < arr[i - 1] && up > 0) || (arr[i] > arr[i - 1] && down >= 0))
                return false;
        }
        return up < down && up >= 0 && down >= 0;
    }
};

int main()
{
    return 0;
}