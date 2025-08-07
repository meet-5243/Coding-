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
        
        ListNode* result = new ListNode(0,head);
        ListNode* dummy = result;
        while(n--){
            head = head->next;
        }

        while(head != nullptr){
            dummy = dummy->next;
            head = head->next;
        }

        ListNode* Temp = dummy->next;
        dummy->next = Temp->next;
        Temp->next = nullptr;
        delete Temp;

        return result->next;
    }
};