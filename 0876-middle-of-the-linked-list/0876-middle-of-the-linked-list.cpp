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
        int n=0 , count=0;
        struct ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        while(n<count/2){
            head=head->next;
            n++ ;
        }
        return head;


    }
};