#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        int size = s.length();
        string result;
        for (int i = 0; i < size;)
        {
            if (s[i] == ' ')
            {
                i++;
                continue;
            }
            int j;
            for (j = 0; i + j < size && s[i + j] != ' '; j++)
                ;
            result = s.substr(i, j) + " " + result;
            i += j;
        }
        result.resize(result.length() - 1);
        return result;
    }
};

int main()
{
    return 0;
}