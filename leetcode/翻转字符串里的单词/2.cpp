#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        int size = s.length(), pos = 0;
        reverse(s.begin(), s.end());
        for (int i = 0; i < size; i++)
        {
            if (s[i] == ' ')
                continue;
            if (pos)
                s[pos++] = ' ';
            int j = i, begin = pos;
            while (j < size && s[j] != ' ')
                s[pos++] = s[j++];
            reverse(s.begin() + begin, s.begin() + pos);
            i = j;
        }
        s.resize(pos);
        return s;
    }
};

int main()
{
    return 0;
}