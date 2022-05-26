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
    int length(ListNode* temp)
    {
        int count = 0;
        while(temp!=NULL)
        {
            temp= temp ->next;
            count++;
        }
        return count;
    }
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)
            return true;
        int n = length(head);
        if(n==2)
            return ((head->val == head->next->val)?true:false);
        stack<int>s;
        ListNode *temp = head;
        if(n%2==0)
        {
            for(int i =0;i<n/2;i++)
            {
                s.push(temp->val);
                temp = temp -> next;
            }
            for(int i = n/2;i<n;i++)
            {
                if(temp->val == s.top())
                    s.pop();
                temp = temp->next;
            }
            if(s.empty())
                return true;
            else
                return false;
        }
        else
        {
            for(int i =0;i<=n/2;i++)
            {
                s.push(temp->val);
                if(i!=n/2)
                    temp = temp -> next;
            }
            for(int i = n/2;i<n;i++)
            {
                if(temp->val == s.top())
                    s.pop();
                temp = temp->next;
            }
            if(s.empty())
                return true;
            else
                return false;
        }
        
    }
};

int main()
{
    return 0;
}