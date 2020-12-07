#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int i = 0, size = strs.size();
        if (size == 0)
            return "";
        int len = strs[0].length();
        while (i < len)
        {
            int j;
            char prev = strs[0][i];
            for (j = 1; j < size; j++)
            {
                if (i >= strs[j].length() || strs[j][i] != prev)
                    return strs[0].substr(0, i);
                prev = strs[j][i];
            }
            i++;
        }
        return strs[0];
    }
};

int main()
{
    return 0;
}