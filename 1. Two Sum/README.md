# Two Sum

## Description
>Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

## Example:
>Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

## Solution
这道题时间复杂度可以做到O(n)
在遍历数组的时候用哈希表将信息记录下来，然后之后的遍历中可以在哈希表中寻找
