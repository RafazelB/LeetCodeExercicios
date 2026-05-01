# 1078. Occurrences After Bigram
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in O(1) extra space complexity and O(n) time complexity.

## Example 1:

Input: text = "alice is a good girl she is a good student", 

first = "a", second = "good"

Output: ["girl","student"]

## Example 2:

Input: text = "we will we will rock you", 

first = "we", second = "will"

Output: ["we","rock"]
