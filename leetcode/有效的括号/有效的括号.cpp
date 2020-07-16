#include <iostream>
#include <string>
#include <stack>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> ss;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                ss.push(s[i]);
            else if (s[i] == ')')
                if (!ss.empty())
                {
                    if (ss.top() == '[' || ss.top() == '{')
                        return false;
                    ss.pop();
                }
                else
                    return false;
            else if (s[i] == ']')
                if (!ss.empty())
                {
                    if (ss.top() == '(' || ss.top() == '{')
                        return false;
                    ss.pop();
                }
                else
                    return false;
            else if (s[i] == '}')
                if (!ss.empty())
                {
                    if (ss.top() == '(' || ss.top() == '[')
                        return false;
                    ss.pop();
                }
                else
                    return false;
            else
                return false;
        }
        if (ss.empty())
            return true;
        return false;
    }
};

int main()
{
    string s;
    getline(cin, s);
    Solution ss;
    if (ss.isValid(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}