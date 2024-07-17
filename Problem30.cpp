class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
         long long num1 = 0, num2 = 0;
        Node* temp1 = first;
        Node* temp2 = second;
        
        while(temp1){
            num1 = (num1 * 10 + temp1->data) % 1000000007;
            temp1 = temp1->next;
        }
        while(temp2){
            num2 = (num2 * 10 + temp2->data) % 1000000007;
            temp2 = temp2->next;
        }
        
        return (num1 * num2) % 1000000007;
    }
};