#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
private:
    vector<string> result;
    vector<string> curr;
    void findParenthesis(string curr, int left, int right)
    {
        if (left == 0 && right == 0)
        {
            result.push_back(curr);
            return;
        }
        if (left > 0)
            findParenthesis(curr + "(", left - 1, right);
        if (right > left)
            findParenthesis(curr + ")", left, right - 1);
    }

public:
    vector<string> generateParenthesis(int n)
    {
        if (n == 0)
            return result;
        findParenthesis("", n, n);
        return result;
    }
};

int main()
{
    vector<string> result = Solution().generateParenthesis(4);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << ", ";
    }
    cout << endl;
    return 0;
}