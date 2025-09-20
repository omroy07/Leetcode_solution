# [Remove Duplicates from a Sorted Linked List](https://www.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1?page=1&status=unsolved&sortBy=submissions)
## Easy
Given a singly linked list. The task is to remove duplicates (nodes with duplicate values) from the given list (if it exists).Note: Try not to use extra space. The nodes are arranged in a sorted way.
Examples:
Input:
LinkedList: 2-&gt;2-&gt;4-&gt;5
Output: 2 -&gt; 4 -&gt; 5
Explanation: In the given linked list 2 -&gt; 2 -&gt; 4 -&gt; 5, only 2 occurs more than 1 time. So we need to remove it once.

Input:
LinkedList: 2-&gt;2-&gt;2-&gt;2-&gt;2
Output: 2
Explanation: In the given linked list  2 -&gt; 2 -&gt; 2 -&gt; 2, 2 is the only element and is repeated 5 times. So we need to remove any four 2.
Expected Time Complexity : O(n)Expected Space&nbsp;Complexity: O(1)
Constraints:1 &lt;= Number of nodes, data of nodes &lt;= 105&nbsp;