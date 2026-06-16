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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int cnt = 0; 
        while(temp != nullptr){
            cnt++;
            temp = temp -> next;
        }
        int len = cnt -n;
        cnt = 0;
        temp = head;
         if (len == 0) {
            ListNode* nw = head->next;
            delete head;
            return nw;
        }
        while(temp != nullptr){
            if( cnt ==len-1){
                ListNode* temp1 = temp -> next;
                temp -> next  = temp1 ->next;
                delete temp1;
                break;
            }
            else {cnt++;
            temp = temp ->next;
            }
        }
        return head;
    }
};