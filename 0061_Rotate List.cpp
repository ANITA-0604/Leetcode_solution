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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr) return head;
        if(head->next == nullptr) return head;
        ListNode *cur = head;
        int size = 0;
        while(cur != nullptr){
            cur = cur->next;
            size++;
        }
        k = k % size;
        while( k-- ){
            cur = head;
            
            ListNode *newNode = new ListNode();
            newNode -> next = head;
            head = newNode;
            ListNode *pre = cur;
            while(cur->next != nullptr){
                pre = cur;
                cur = cur ->next;
            }
            pre->next = nullptr;
            head -> val = cur->val;
        }
        return head ;
    }
};
