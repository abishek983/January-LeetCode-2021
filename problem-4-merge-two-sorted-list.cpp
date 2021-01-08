// https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3592/

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
    ListNode* mergeListUtil(ListNode* l1, ListNode* l2){
        ListNode* curr = l1; ListNode* prevNode = NULL;
        ListNode* head2 = l2; ListNode* root = l1;
        while(curr!=NULL && head2!=NULL){
            if(curr->val >= head2->val){
                ListNode* temp = head2->next;
                if(prevNode==NULL){
                    head2->next = curr->next;
                    curr->next = head2;
                    prevNode = curr;
                    curr = head2;
                }
                else{
                    head2->next = prevNode->next;
                    prevNode->next = head2;
                    prevNode = head2;
                    curr = prevNode->next;
                }
                head2 = temp;
            }
            else{
                prevNode = curr;
                curr = curr->next;
            }
        }
        while(head2!=NULL){
            prevNode->next = head2;
            prevNode = head2;
            head2 = head2->next;
            
        }
        return root;
    }
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head;
        if(l1 == NULL)
            return l2;
        else if(l2 == NULL)
            return l1;
        if(l1->val < l2->val)
            head = mergeListUtil(l1, l2);
        else
            head = mergeListUtil(l2, l1);
        
        return head;
    }
};
