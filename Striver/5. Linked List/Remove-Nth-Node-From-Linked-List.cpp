#include<bits/stdc++.h>
using namespace std;

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
        if(head->next == NULL)
            return NULL;
        ListNode * first = head, *second = head;
        while(n--)
        {
            second = second -> next;
        }
        if(second == NULL)
            return first->next;
        while(second->next !=NULL)
        {
            first = first -> next;
            second = second -> next;
        }
        ListNode * node = first -> next;
        first -> next = node -> next;
        delete(node);
        return head;
    }
};

int main ()
{
    return 0;
}
