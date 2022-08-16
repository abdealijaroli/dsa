/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //iteratively
        ListNode *current = head;
        ListNode *prev = NULL;
        ListNode *temp;
        
        while(current != NULL){
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        head = prev;
        return head;
        
        //recursively
        
        // //base case
        // if(head == NULL or head->next == NULL){
        //     return head;
        // }
        // //rec case
        // ListNode* newHead = reverseList(head->next);
        // head->next->next = head;
        // head->next = NULL;
        // return newHead;
    }
};