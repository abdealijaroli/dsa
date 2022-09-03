/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *h) {
        unordered_set<ListNode *> s;
        
        while(h != NULL){
            if(s.find(h) != s.end()){
                return true;
            }
            s.insert(h);
            h = h->next;
        }
        
        return false;
    }
};