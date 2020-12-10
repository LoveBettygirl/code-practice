#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    void findNext(vector<int> &next, string needle)
    {
        int k = -1, size = needle.length();
        next[0] = k;
        for (int i = 0; i < size;)
        {
            if (k == -1 || needle[i] == needle[k])
            {
                i++;
                k++;
                next[i] = k;
            }
            else
                k = next[k];
        }
    }
    int strStr(string haystack, string needle)
    {
        int size1 = haystack.length(), size2 = needle.length();
        if (size2 == 0)
            return 0;
        vector<int> next(size2 + 1, 0);
        findNext(next, needle);
        int i = 0, j = 0;
        while (i < size1 && j < size2)
        {
            if (j == -1 || haystack[i] == needle[j])
            {
                i++;
                j++;
            }
            else
                j = next[j];
        }
        if (j == size2)
            return i - j;
        return -1;
    }
};

int main()
{
    return 0;
}