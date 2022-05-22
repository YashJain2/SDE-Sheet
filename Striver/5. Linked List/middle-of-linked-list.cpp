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
    // int listLen(ListNode* head)
    // {
    //     int count = 0;
    //     while(head!=NULL)
    //     {
    //         count++;
    //         head = head -> next;
    //     }
    //     return count;
    // }
    ListNode* middleNode(ListNode* head) {
        // int length = listLen(head);
        // length/=2;
        // // cout<<length<<endl;
        // while(length)
        // {
        //     length--;
        //     head=head->next;
        // }
        // return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;            
        }
        return slow;
    }
};


int main()
{
    return 0;
}