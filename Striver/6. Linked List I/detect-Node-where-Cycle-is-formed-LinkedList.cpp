#include<bits/stdc++.h>
using namespace std;


//  * Definition for singly-linked list.
 struct ListNode {
     int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode * fast = head;
        ListNode * slow = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast = fast -> next -> next;
            slow = slow -> next;
            if(fast==slow)
                break;
        }
        if(fast!=slow)
            return NULL;
        fast = head;
        while(fast!=slow)
        {
            fast = fast -> next;
            slow = slow -> next;
        }
        return fast;
    }
};

int main()
{
    return 0;
}