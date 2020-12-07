#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        string sum;
        int i = num1.length() - 1, j = num2.length() - 1, carry = 0;
        while (i >= 0 || j >= 0)
        {
            int temp = 0;
            if (i >= 0)
                temp += (int)(num1[i] - '0');
            if (j >= 0)
                temp += (int)(num2[j] - '0');
            temp += carry;
            carry = temp / 10;
            sum = string(1, '0' + (char)(temp % 10)) + sum;
            i--;
            j--;
        }
        return carry == 1 ? "1" + sum : sum;
    }
};

int main()
{
    return 0;
}