#include<bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  
class Solution {
    
public:
    int length(ListNode * head)
    {
        int count = 0;
        while(head!=NULL)
        {
            head = head->next;
            count++;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
//         if(head == NULL||head->next == NULL) return head;
//         // int n = length(head);
//         ListNode *prev = NULL;
//         ListNode *curr = head;
//         ListNode *nextptr;
//         for(int i = 0;i<k && curr!=NULL;i++)
//         {
//             nextptr = curr -> next;
//             curr -> next = prev;
//             prev = curr;
//             curr = nextptr;
//         }
        
//         if(nextptr!=NULL)
//             head->next = reverseKGroup(nextptr,k);
//         return prev;
        
         if(head == NULL||head->next == NULL) return head;
        int len = length(head);
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* pre = dummyHead;
        ListNode* cur;
        ListNode* nex;
    
    while(len >= k) {
        cur = pre->next;
        nex = cur->next;
        for(int i=1;i<k;i++) {
            cur->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
            nex = cur->next;
        }
        pre = cur;
        len -= k;
    }
    return dummyHead->next;
    }
};

int main()
{
    return 0;
}