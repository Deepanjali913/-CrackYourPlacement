//Leetcode 1290
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
    int getDecimalValue(ListNode* head) {
        int ans = 0 ;
        string num ;
        while(head){
            num += to_string(head->val);
            head = head->next ;
        }
        cout<<num<<endl ;
        reverse(num.begin() , num.end());
        for(int i=0 ; i<num.size() ; i++){
            ans += pow(2 , i) * (num[i]-'0') ;
            cout<<ans<<" ";
        }
        return ans ;
        
    }
};