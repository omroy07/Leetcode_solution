# [Sort a linked list of 0s, 1s and 2s](https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1?page=7&sortBy=submissions)
## Medium
Given the head of a linked list where nodes can contain values 0s,&nbsp;1s,&nbsp;and&nbsp;2s&nbsp;only. Your&nbsp;task is to&nbsp;rearrange&nbsp;the list so that all&nbsp;0s&nbsp;appear at the beginning, followed by all&nbsp;1s, and all&nbsp;2s&nbsp;are placed at the end.
Examples:
Input: head = 1 → 2 → 2 → 1 → 2 → 0 → 2 → 2   Output: 0 → 1 → 1 → 2 → 2 → 2 → 2 → 2Explanation: All the 0s are segregated to the left end of the linked list, 2s to the right end of the list, and 1s in between. The final list will be:   
Input: head = 2 → 2 → 0 → 1   Output: 0 → 1 → 2 → 2Explanation: After arranging all the 0s, 1s and 2s in the given format, the output will be:   
Constraints:1 ≤ no. of nodes ≤ 1060 ≤ node-&gt;data ≤ 2