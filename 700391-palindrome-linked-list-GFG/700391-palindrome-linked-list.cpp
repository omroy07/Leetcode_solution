/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    bool IsPalindrome(vector<int> p){
        int i = 0 , j = p.size()-1;
        while(i < j){
            if(p[i] != p[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(Node *head) {
        //  code here
        vector<int> ans;
        while(head){
            ans.push_back(head->data);
            head = head->next;
        }
        return IsPalindrome(ans);
    }
};