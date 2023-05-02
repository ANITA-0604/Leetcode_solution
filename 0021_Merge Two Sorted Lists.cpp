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
        ListNode *cur1 = list1;
        ListNode *cur2 = list2;
        ListNode *ans = nullptr;
        ListNode *ans_tail = nullptr;
        while(cur1 != nullptr || cur2 != nullptr){
            ListNode *temp = new ListNode();
            if(ans == nullptr){
                ans = temp;
                ans_tail = ans;
            }
            else{
                ans_tail->next = temp;
                ans_tail = ans_tail -> next;
            }
            if(cur1 == nullptr){
                
                ans_tail-> val = cur2->val;
                cur2 = cur2->next;
                cout<<"cur2"<<endl;
                continue;
            }
            if(cur2 == nullptr){
                
                ans_tail-> val = cur1->val;
                cur1 = cur1->next;
                cout<<"cur1"<<endl;
                continue;
            }
            if(cur1->val >= cur2->val){
                ans_tail-> val = cur2->val;
                cur2 = cur2->next;
                cout<<"cur2"<<endl;
                continue;
            }
            
            if(cur1->val < cur2->val){
                ans_tail-> val = cur1->val;
                cur1 = cur1->next;
                cout<<"cur1"<<endl;
                continue;
            }
        }
        
        return ans;
        
    }
};
