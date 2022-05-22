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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL)
            return list1;
        if(list1 == NULL)
            return list2;
        else if (list2==NULL)
            return list1;
       ListNode* first = list1, *second = list2,*prev=NULL;
        while(first!=NULL && second !=NULL)
        {
            if(first->val >= second ->val && !prev)
            {
                prev = second;
                second = second ->next;
            }
            else if (first->val < second -> val && !prev)
            {
                prev = first;
                first = first -> next;
            }
            else if (first->val >= second ->val)
            {
                prev -> next = second;
                prev = second;
                second = second -> next;
            }
            else
            {
                prev -> next = first;
                prev = first;
                first = first -> next;
            }
        }
        if(first!=NULL)
            prev -> next = first;
        if(second!=NULL)
            prev -> next = second;
        
        if(list1->val >= list2->val)
            return list2;
        else 
            return list1;
            
    }
};

int main()
{
    return 0;
}