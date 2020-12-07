#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    int countBinarySubstrings(string s)
    {
        int size = s.length(), first = 0, end = 0, sum = 0, count = 0;
        for (int i = 0; i <= size; i++)
        {
            if (i == 0 || i == size || s[i] != s[i - 1])
            {
                sum += min(count, end - first);
                count = end - first;
                first = end = i;
            }
            end++;
        }
        return sum;
    }
};

int main()
{
    return 0;
}