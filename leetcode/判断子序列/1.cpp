#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0, j = 0;
        while (i < s.length())
        {
            if (j >= t.length())
                break;
            if (s[i] == t[j])
                i++;
            j++;
        }
        return i == s.length();
    }
};

int main()
{
    return 0;
}