#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int result = 0;
        int size = prices.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                int price = prices[j] - prices[i];
                if (price > result)
                    result = price;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    int n[] = {7, 1, 5, 3, 6, 4};
    vector<int> nums(n, n + sizeof(n) / sizeof(int));
    cout << s.maxProfit(nums) << endl;
    return 0;
}