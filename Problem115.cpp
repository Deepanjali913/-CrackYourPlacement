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
    void reorderList(ListNode* head) {
     
        ListNode * slow = head ;
        ListNode* fast = head ;
        while(fast && fast->next){
            slow = slow->next ;
            fast = fast->next->next ;
        }
        ListNode* prev = NULL;
        ListNode* curr = slow ;
        ListNode* next = NULL ;
        while(curr){
            next = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = next ;
        }
        ListNode* first = head ;
        ListNode* second = prev ;
        ListNode* temp = head ;
        while(second->next){
            temp=temp->next;
            first->next = second ;
            second = second->next ;
            first->next->next = temp ;
            first = first->next->next;
        }
       
    }
};