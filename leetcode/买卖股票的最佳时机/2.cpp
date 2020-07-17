#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() == 0)
            return 0;
        int minPrice = prices[0], result = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            int price = prices[i] - minPrice;
            if (price > result)
                result = price;
            if (prices[i] < minPrice)
                minPrice = prices[i];
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