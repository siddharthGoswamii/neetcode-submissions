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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b){
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while(a!=nullptr && b!=nullptr){
            if(a->val <= b->val){
                tail->next = a;
                a = a->next;
            }else{
                tail->next = b;
                b = b->next;
            }
        tail = tail->next;
        }

        if (a != nullptr) {
            tail->next = a;
            a = a->next;
        } else {
            tail->next = b;
            b = b->next;
        }

        return dummy.next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()){
            return nullptr;
        }

        int interval = 1;
        int k = lists.size();

        while(interval < k){
            for(int i = 0 ; i + interval < k ; i += interval*2){
                lists[i] = mergeTwoLists(lists[i], lists[i + interval]);
            }
        interval *= 2;
        }
    return lists[0];
    }
};
