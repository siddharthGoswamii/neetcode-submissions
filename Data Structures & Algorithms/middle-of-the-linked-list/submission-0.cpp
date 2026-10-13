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
    ListNode* middleNode(ListNode* head) {

        ListNode* curr = head;
        int size = 0;
        while(curr){
            curr = curr->next;
            size++;
        }
        size = size/2 ;

        for(int i = 0 ; i < size ; i++){
            head = head->next;
        }
        return head;
    }
};