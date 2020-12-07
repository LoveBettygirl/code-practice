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
        for (int i = 0; i < size; i++)
        {
            int temp = getValue(s[i]);
            if (i < size - 1)
            {
                int temp2 = getValue(s[i + 1]);
                if (temp2 > temp)
                {
                    temp = temp2 - temp;
                    i++;
                }
            }
            sum += temp;
        }
        return sum;
    }
};

int main()
{
    return 0;
}