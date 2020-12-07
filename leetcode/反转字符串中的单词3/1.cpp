#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        int size = s.length(), i = 0;
        for (int i = 0; i < size; i++)
        {
            if (s[i] == ' ')
                continue;
            int j = i;
            while (j < size && s[j] != ' ')
                j++;
            reverse(s.begin() + i, s.begin() + j);
            i = j;
        }
        return s;
    }
};

int main()
{
    return 0;
}