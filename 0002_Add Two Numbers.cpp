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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ans = new ListNode;
        int c = 0;
        ListNode * head = new ListNode;
        head = ans;
        while(l1!=NULL||l2!=NULL||c!=0){
            int val1 = 0 ,val2 = 0;
            if(l1!=NULL){
                val1 = l1->val;
                
            }
            if(l2!=NULL){
                val2 = l2->val;
                
            }
            int temp = val1+val2+c;
            c = 0;
            if(temp>9) {
                c = temp/10;
                temp = temp %10;
            }
            ans->val = temp;
            if(l1!=NULL){
                l1 = l1->next;
                
            }
            if(l2!=NULL){
                l2 = l2->next;
                
            }
            ListNode *tmp = new ListNode;
            cout<<c<<endl;
            if(l1!=NULL||l2!=NULL||c!=0){
                ans->next = tmp;
                ans = ans ->next;
            }
            
        }
        return head;
    }
};
