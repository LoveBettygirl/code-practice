#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0, size = s.length();
        unordered_map<string, int> m;
        m["I"] = 1;
        m["IV"] = 4;
        m["V"] = 5;
        m["IX"] = 9;
        m["X"] = 10;
        m["XL"] = 40;
        m["L"] = 50;
        m["XC"] = 90;
        m["C"] = 100;
        m["CD"] = 400;
        m["D"] = 500;
        m["CM"] = 900;
        m["M"] = 1000;
        for (int i = 0; i < size; i++)
        {
            if (i < size - 1 && m.find(string(1, s[i]) + string(1, s[i + 1])) != m.end())
            {
                sum += m[string(1, s[i]) + string(1, s[i + 1])];
                i++;
            }
            else
                sum += m[string(1, s[i])];
        }
        return sum;
    }
};

int main()
{
    return 0;
}