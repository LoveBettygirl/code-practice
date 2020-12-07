#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0, size = digits.size();
        for (int i = size - 1; i >= 0; i--)
        {
            int temp = digits[i];
            if (i == size - 1)
                digits[i] = (digits[i] + 1 + carry) % 10;
            else
                digits[i] = (digits[i] + carry) % 10;
            if (temp > digits[i])
                carry = 1;
            else
                carry = 0;
        }
        if (carry == 1)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main()
{
    return 0;
}