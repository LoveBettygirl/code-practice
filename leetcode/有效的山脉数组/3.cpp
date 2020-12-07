#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int size = arr.size(), p1 = 0, p2 = size - 1;
        while (p1 < size - 1 && arr[p1] < arr[p1 + 1])
            p1++;
        if (p1 == 0 || p1 == size - 1)
            return false;
        while (p1 < size - 1 && arr[p1] > arr[p1 + 1])
            p1++;
        return p1 == size - 1;
    }
};

int main()
{
    return 0;
}