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
        ListNode* newL = new ListNode();
        ListNode* temp = newL;
        ListNode* first = list1;
        ListNode* second = list2;

        while(first != nullptr && second != nullptr){
            if(first->val < second->val){
                ListNode* newN = new ListNode(first->val);
                temp->next = newN;temp=temp->next;
                first = first->next;
            }else{
                ListNode* newN = new ListNode(second->val);
                temp->next = newN;temp=temp->next;
                second = second->next;
            }
        }

        while(first != nullptr){
            ListNode* newN = new ListNode(first->val);
            temp->next = newN;temp=temp->next;
            first = first->next;
        }

        while(second != nullptr){
            ListNode* newN = new ListNode(second->val);
            temp->next = newN;temp=temp->next;
            second = second->next;
        }

        return newL->next;
    }
};