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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        
        if(list2 == NULL){
            return list1;
        }
        
        ListNode *head1 = list1;
        ListNode *head2 = list2;
        
        ListNode *finalHead;
        
        if(head1->val < head2->val){
            finalHead = head1;
            finalHead->next = mergeTwoLists(list1->next, list2);
        }
        else{
            finalHead = head2;
            finalHead->next = mergeTwoLists(list1, list2->next);    
        }
        
        return finalHead;
    }
};