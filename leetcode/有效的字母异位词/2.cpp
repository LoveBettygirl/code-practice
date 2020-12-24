#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
            return false;
        unordered_map<char, int> m;
        for (int i = 0; i < s.length(); i++)
            m[s[i]]++;
        for (int i = 0; i < t.length(); i++)
        {
            m[t[i]]--;
            if (m[t[i]] < 0)
                return false;
        }
        return true;
    }
};

int main()
{
    return 0;
}