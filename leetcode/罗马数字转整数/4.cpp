#include <string>
#include <iostream>
using namespace std;

class Solution
{
private:
    int getValue(char s)
    {
        switch (s)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }

public:
    int romanToInt(string s)
    {
        int sum = 0, size = s.length();
        int prev = getValue(s[0]), curr;
        for (int i = 1; i < size; i++)
        {
            curr = getValue(s[i]);
            if (prev < curr)
                sum -= prev;
            else
                sum += prev;
            prev = curr;
        }
        sum += prev;
        return sum;
    }
};

int main()
{
    return 0;
}