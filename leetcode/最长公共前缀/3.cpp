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
        int index = 0;
        string prev = strs[0];
        for (i = 1; i < size; i++)
        {
            index = 0;
            for (int j = 0; j < prev.length() && j < strs[i].length(); j++)
            {
                if (prev[j] == strs[i][j])
                    index++;
                else
                    break;
            }
            prev = prev.substr(0, index);
        }
        return prev;
    }
};

int main()
{
    return 0;
}