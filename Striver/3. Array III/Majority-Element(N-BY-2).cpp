#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // if(nums.size()==1)
        //     return nums[0];
        // sort(nums.begin(),nums.end());
        // int temp = 1;
        // for(int i = 0;i < nums.size(); i++)
        // {
        //     if(nums[i]==nums[i+1])
        //         temp++;
        //     else
        //         temp=1;
        //     if(temp>(nums.size()/2))
        //         return (nums[i]);
        // }
        // return -1;
        int count =0,element =0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
                element = nums[i];
            if(element == nums[i])
                count++;
            else
                count--;
        }
        return element;
    }
};

int main()
{
    return 0;
}