#include <iostream>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int size = s.length(), start = 0, end = size;
        for (int i = size - 1; i >= 0; i--)
        {
            if (s[i] == ' ')
                end = i;
            else if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
            {
                start = i;
                break;
            }
        }
        return end - start;
    }
};

int main()
{
    return 0;
}