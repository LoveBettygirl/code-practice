#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    bool wordBreak(string s, vector<string> &wordDict)
    {
        unordered_set<string> ss;
        for (int i = 0; i < wordDict.size(); i++)
        {
            ss.insert(wordDict[i]);
        }
        vector<bool> f(s.length() + 1, false);
        f[0] = true;
        int i;
        for (i = 1; i < f.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (f[j] && ss.find(s.substr(j, i - j)) != ss.end())
                {
                    f[i] = true;
                    break;
                }
            }
        }
        return f[s.length()];
    }
};

int main()
{
    return 0;
}