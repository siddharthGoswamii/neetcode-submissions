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
        ListNode* curr = head;
        int m = 0;

        while(curr!=nullptr){
            m++;
            curr = curr->next;
        }

        if (n == m) {
        return head->next;
    }

        int steps = m-n-1;
        ListNode* take = head;
        while(steps>0){
           take = take->next; 
           steps--;
        }
    
        take->next = take->next->next;

        return head;
    }
};
