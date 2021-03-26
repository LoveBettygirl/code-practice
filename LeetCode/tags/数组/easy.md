## 35. 搜索插入位置（1）

[https://leetcode-cn.com/problems/search-insert-position/](https://leetcode-cn.com/problems/search-insert-position/)

暴力、二分查找

### 题目描述

给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

你可以假设数组中无重复元素。

示例 1:

```
输入: [1,3,5,6], 5
输出: 2
```


示例 2:

```
输入: [1,3,5,6], 2
输出: 1
```


示例 3:

```
输入: [1,3,5,6], 7
输出: 4
```


示例 4:

```
输入: [1,3,5,6], 0
输出: 0
```

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

## 27. 移除元素（1）

暴力、双指针（快慢指针）

下次还来

### 题目描述

给你一个数组 `nums` 和一个值 `val`，你需要 **原地** 移除所有数值等于 `val` 的元素，并返回移除后数组的新长度。

不要使用额外的数组空间，你必须仅使用 $O(1)$ 额外空间并 **原地** 修改输入数组。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

示例 1：

```
输入：nums = [3,2,2,3], val = 3
输出：2, nums = [2,2]
解释：函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。你不需要考虑数组中超出新长度后面的元素。例如，函数返回的新长度为 2 ，而 nums = [2,2,3,3] 或 nums = [2,2,0,0]，也会被视作正确答案。
```


示例 2：

```
输入：nums = [0,1,2,2,3,0,4,2], val = 2
输出：5, nums = [0,1,4,0,3]
解释：函数应该返回新的长度 5, 并且 nums 中的前五个元素为 0, 1, 3, 0, 4。注意这五个元素可为任意顺序。你不需要考虑数组中超出新长度后面的元素。
```

> 示例中输出的数字（慢指针）就提示了用双指针了啊啊啊

提示：

- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`
- `0 <= val <= 100`

### 暴力法

从左到右遍历，遇到一个等于 `val` 的元素，就将 `i` 之后的所有元素整体向前移动一格

```c++
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size(), i = 0, j = 0;
        for (i = 0; i < size; i++) {
            if (nums[i] == val) {
                int k = i;
                // 将i之后的所有元素整体向前移动一格
                for (j = i + 1; j < size; j++) {
                    nums[k] = nums[j];
                    k++;
                }
                // 遇到一个等于val的元素就从数组中删掉一个
                size--;
                // 可能原先第i+1个元素可能还等于val，移动之后第i个元素还是val，因此下次循环i的位置不变
                i--;
            }
        }
        return size;
    }
};
```

时间复杂度：$O(n^2)$

空间复杂度：$O(1)$

### 双指针

#### 基于数据拷贝

定义慢指针 `i` 和快指针 `j` ，均从0开始。**使用快指针**来遍历整个数组，快指针 `j` 指向的当前元素不是 `val` 就覆盖 `i` 处的值，是 `val` 就跳过

```c++
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size(), i = 0, j = 0;
        for (int j = 0; j < size; j++) {
            if (nums[j] != val)
                nums[i++] = nums[j];
        }
        return i;
    }
};
```

时间复杂度：$O(n)$

空间复杂度：$O(1)$

（现在觉得双指针是个神奇的技术，可以将$O(n^2)$的时间复杂度减为$O(n)$，但是总是想不起来怎么写，还是要多练啊）

#### 基于交换

上述的方法在要删除的元素很少时，会引起多次不必要的数据拷贝。因此可以将要删除的元素移动到数组的最后。

```c++
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size(), i = 0;
        while (i < size) {
            if (nums[i] == val) {
                swap(nums[i], nums[size - 1]);
                // 遇到一个等于val的元素就从数组中删掉一个
                size--;
                // 可能被移动过来的最后一个元素仍然等于val，因此i不变，下次循环继续做交换操作
                continue;
            }
            i++;
        }
        return i;
    }
};
```

时间复杂度：$O(n)$

空间复杂度：$O(1)$

