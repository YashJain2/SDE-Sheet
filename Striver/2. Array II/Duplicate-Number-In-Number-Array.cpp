#include<bits/stdc++.h>
using namespace std;

//Hare and tortoise algo || Flyod's Algo
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     if(nums[i]==nums[i+1])
        //         return nums[i];
        // }
        // return -1;
        
        // //Using frequency array
        // int freq[nums.size()+1];
        // for(int i=0;i<nums.size()+1;i++)
        //     freq[i]=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(freq[nums[i]]==0)
        //         freq[nums[i]]++;
        //     else
        //         return nums[i];
        // }
        // return -1;
        int slow = nums[0];
        int fast = nums[0];
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);
        fast = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};


int main()
{
    return 0;
}