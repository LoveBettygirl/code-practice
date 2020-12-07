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
        while (p2 > 0 && arr[p2] < arr[p2 - 1])
            p2--;
        return p1 == p2 && p1 != size - 1 && p2 != 0;
    }
};

int main()
{
    return 0;
}