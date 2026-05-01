# 328. Odd Even Linked List
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in O(1) extra space complexity and O(n) time complexity.

## Example 1:
<img width="542" height="222" alt="image" src="https://github.com/user-attachments/assets/412c9493-e1ad-46e6-bf79-e799d5afddda" />
Input: head = [1,2,3,4,5]

Output: [1,3,5,2,4]

## Example 2:
<img width="782" height="222" alt="image" src="https://github.com/user-attachments/assets/16c1063f-774a-450b-8dfd-604d195b2c25" />
Input: head = [2,1,3,5,6,4,7]

Output: [2,3,6,7,1,5,4]

## Constraints:
The number of nodes in the linked list is in the range [0, 104].

-10^6 <= Node.val <= 10^6
