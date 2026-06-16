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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* temp = head;
        while (temp != nullptr) {
            ListNode* nxt =temp->next;
            temp->next = prev;
            prev = temp;
            temp = nxt;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true; 
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next!= nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* sc = reverseList(slow->next);
        ListNode* first = head;
        ListNode* second = sc;
        bool flag = true;
        while (second != nullptr) {
            if (first->val != second->val) {
                flag = false;
                break;
            }
            first = first->next;
            second = second->next;
        }
        slow->next = reverseList(sc);
        return flag;
    }
};
