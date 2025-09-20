/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        Node* current = head;
        while(current && current->next){
            if(current->data  == current->next->data){
                current->next = current->next->next;
            }
            else{
                current = current->next;
            }
        }
        return head;
    }
};