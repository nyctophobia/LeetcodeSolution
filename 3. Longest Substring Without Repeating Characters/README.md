# Longest Substring Without Repeating Characters

## Description
>Given a string, find the length of the longest substring without repeating characters.

# Examples:
>Given "abcabcbb", the answer is "abc", which the length is 3.
>Given "bbbbb", the answer is "b", with the length of 1.
>Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

## Solution
计算不含重复字符的最长字串
从左往右扫描，维系一个窗口，这个窗口内的字串没有重复字符，该窗口的起始位置记为start，终止位置记为end，闭区间[start,end]。
如果end+1位置的字符出现在窗口位置x中，则窗口改为[x+1,end+1],遍历原始字符串后，取最大的窗口长度即所求值