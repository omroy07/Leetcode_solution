# [Maximum Index](https://www.geeksforgeeks.org/problems/maximum-index-1587115620/1?page=2&status=unsolved&sortBy=submissions)
## Medium
Given an array arr of positive integers. You have to return the maximum of j - i such that arr[i] &lt; arr[j] and i &lt;&nbsp;j.
Examples:
Input: arr[] = [1, 10]
Output: 1
Explanation: arr[0] &lt; arr[1] so (j-i) is 1-0 = 1.
Input: arr[] = [5, 4, 3]
Output: 0
Explanation: There is no pair that satisfies the given condition.
Input: arr[] = [34, 8, 10, 3, 2, 80, 30, 33, 1]
Output: 6
Explanation: In the given array arr[1] &lt; arr[7] satisfying the required condition(arr[i] &lt; arr[j]) thus giving the maximum difference of j - i which is 6(7-1).

Constraints:1 ≤ arr.size ≤ 1050 ≤ arr[i] ≤ 109