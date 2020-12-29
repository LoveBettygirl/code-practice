#include <iostream>
using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

int guess(int num);

class Solution
{
public:
    int guessNumber(int n)
    {
        int l = 1, r = n;
        while (l <= n)
        {
            int mid = l + (r - l) / 2;
            int ans = guess(mid);
            if (ans == 0)
                return mid;
            else if (ans == 1)
                l = mid + 1;
            else if (ans == -1)
                r = mid - 1;
        }
        return -1;
    }
};

int main()
{
    return 0;
}