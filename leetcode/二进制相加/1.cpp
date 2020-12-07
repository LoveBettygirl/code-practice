#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string sum;
        int i = a.length() - 1, j = b.length() - 1, carry = 0;
        while (i >= 0 || j >= 0)
        {
            int temp = 0;
            if (i >= 0)
                temp += (int)(a[i] - '0');
            if (j >= 0)
                temp += (int)(b[j] - '0');
            temp += carry;
            carry = temp / 2;
            sum = string(1, '0' + (char)(temp % 2)) + sum;
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