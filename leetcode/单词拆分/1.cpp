#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    bool wordBreak(string s, vector<string> &wordDict)
    {
        int i;
        for (i = 0; i < s.length();)
        {
            for (int j = 0; j < wordDict.size(); j++)
            {
                int len = wordDict[j].length();
                if (s.substr(i, len) == wordDict[j])
                {
                    i += len;
                    break;
                }
            }
        }
        if (i < s.length())
            return false;
        return true;
    }
};

int main()
{
    return 0;
}
