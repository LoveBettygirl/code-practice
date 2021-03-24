## 35. 搜索插入位置（1）

[https://leetcode-cn.com/problems/search-insert-position/](https://leetcode-cn.com/problems/search-insert-position/)

暴力、二分查找

### 一次遍历的暴力法

```c++
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (target <= nums[i])
                return i;
        }
        return size;
    }
};
```

时间复杂度：$O(n)$

空间复杂度：$O(1)$

### 二分查找

返回 `>= target` 的第一个数

```c++
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size(), mid = 0;
        while (l < r) {
            mid = l + (r - l) / 2;
            if (nums[mid] < target) {
                l = mid + 1;
            }
            else if (nums[mid] >= target) {
                r = mid;
            }
        }
        return l;
    }
};
```

时间复杂度：$O(\log n)$

空间复杂度：$O(1)$