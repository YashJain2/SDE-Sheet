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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp1 = l1, *temp2 = l2;
        int carry = 0;
        while(temp1 != NULL && temp2!=NULL)
        {
            int sum = carry + temp1->val + temp2->val;
            carry = sum/10;
            temp1->val = sum%10;
            temp1 = temp1->next;
            temp2 = temp2->next;                
        }
        while(temp1!=NULL)
        {
            int sum = carry + temp1->val;
            carry = sum/10;
            temp1->val = sum%10;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            int sum = carry + temp2->val;
            carry = sum/10;
            temp2->val = sum%10;
            temp2=temp2->next;
        }
        ListNode *t1=l1,*t2=l2;
        while(t1->next!=NULL && t2->next!=NULL)        
        {
            t1 = t1 -> next;
            t2 = t2 -> next;
        }
        if(t1->next == NULL)
        {
            t1 -> next = t2 -> next;
        }
        while(t1->next != NULL)
        {
            t1= t1 ->next;
        }
        
        if(carry)
        {
            ListNode * node = new ListNode(carry);
            t1 -> next = node;
        }
        return l1;
    }
};

int main()
    {
        return 0;
    }