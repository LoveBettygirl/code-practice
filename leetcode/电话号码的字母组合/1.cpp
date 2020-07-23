#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
class Solution
{
private:
    map<char, string> m;
    vector<string> letter(vector<string> &digits, char c)
    {
        vector<string> result;
        string temp = m[c];
        string new_;
        for (int i = 0; i < temp.length(); i++)
        {
            for (int j = 0; j < digits.size(); j++)
            {
                new_ = temp[i];
                new_ += digits[j];
                result.push_back(new_);
            }
        }
        return result;
    }

public:
    Solution()
    {
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
    }
    vector<string> letterCombinations(string digits)
    {
        if (digits.length() == 0)
            return vector<string>();
        vector<string> result;
        result.push_back("");
        for (int i = digits.length() - 1; i >= 0; i--)
        {
            result = letter(result, digits[i]);
        }
        return result;
    }
};

int main()
{
    vector<string> result = Solution().letterCombinations("23");
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ", ";
    }
    cout << endl;
    return 0;
}