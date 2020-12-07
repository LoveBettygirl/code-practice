#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string result;
        int i = 0, size = strs.size();
        if (size == 0)
            return result;
        while (true)
        {
            int j;
            char prev = 0;
            for (j = 0; j < size; j++)
            {
                if (i >= strs[j].length())
                    break;
                if (j != 0 && strs[j][i] != prev)
                    break;
                prev = strs[j][i];
            }
            if (j == size)
                result += strs[0][i];
            else
                break;
            i++;
        }
        return result;
    }
};

int main()
{
    return 0;
}