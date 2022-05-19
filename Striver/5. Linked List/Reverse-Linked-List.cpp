#include<bits/stdc++.h>
using namespace std;
//  Definition for singly-linked list.
 struct ListNode {
    int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // if( head == NULL || head->next == NULL )
        //     return head;
        // ListNode* newhead = reverseList(head->next);
        // head -> next -> next = head;
        // head -> next = NULL;
        // return newhead;
        ListNode *curr,*prev;
        curr = head;
        prev = NULL;
        while(curr!=NULL)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};

int main()
{
    return 0;
}