class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        if(!head || !head->next){
            return head;
        }
        
        int zeroCount=0;
        int oneCount=0;
        int twoCount=0;
        Node* curr=head;
        while(curr){
            int val=curr->data;
            if(val==0){
                zeroCount++;
            }
            else if(val==1){
                oneCount++;
            }
            else if(val==2){
                twoCount++;
            }
            curr=curr->next;
        }
        curr=head;
        while(curr){
            if(zeroCount !=0){
                curr->data=0;
                zeroCount--;
            }
            else if(oneCount != 0){
                curr->data=1;
                oneCount--;
            }
            else if(twoCount != 0){
                curr->data=2;
                twoCount--;
            }
            curr=curr->next;
        }
        return head;
        
    }
};