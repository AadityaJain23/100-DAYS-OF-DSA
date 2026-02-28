/*Palindrome Linked List

Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

Example 1:
Input: head = [1,2,2,1]
Output: true

Example 2:
Input: head = [1,2]
Output: false
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    
    if(head == NULL || head->next == NULL){
        return true;
    }

    struct ListNode *slow = head, *fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    struct ListNode *prev = NULL, *curr = slow, *next = NULL;

    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    struct ListNode *first = head;
    struct ListNode *second = prev;

    while(second){
        if(first->val != second->val){
            return false;
        }
        first = first->next;
        second = second->next;
    }

    return true; 
}