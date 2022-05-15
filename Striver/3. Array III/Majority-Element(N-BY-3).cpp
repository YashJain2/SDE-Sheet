#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // if(nums.size()==1)
        //     return nums;
        // else if (nums.size()==2)
        //     if(nums[0]==nums[1])
        //         return {nums[0]};
        //     else
        //         return nums;
        // sort(nums.begin(),nums.end());
        // vector<int> ans;
        // int temp = 1;
        // for(int i = 0; i < nums.size()-1; i++)
        // {
        //     if(temp>(nums.size()/3) && nums[i]!=nums[i+1])
        //         ans.push_back(nums[i]);
        //     if(nums[i]==nums[i+1])
        //         temp++;
        //     else
        //         temp=1;
        // }
        // if(temp>(nums.size()/3))
        //     ans.push_back(nums[nums.size()-1]);
        // return ans;
            
        int num1 = -1,num2 = -1, count1 = 0, count2 = 0;
        for(int i = 0 ;i < nums.size(); i++)
        {
            if (nums[i] == num1)
                count1++;
            else if (nums[i] == num2)
                count2++;
            else if (count1 == 0) {
                num1 = nums[i];
                count1 = 1;
            } 
            else if (count2 == 0) {
                num2 = nums[i];
                count2 = 1;
            }
            else 
            count1--, count2--;
        }
        count1 = count2 = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(num1==nums[i])
                count1++;
            if(nums[i]==num2)
                count2++;
        }
        vector <int> ans;
        // cout<<num1<<" "<<num2;
        if(count1>(nums.size()/3) && num1!=num2)
            ans.push_back(num1);
        if(count2>(nums.size()/3))
            ans.push_back(num2);
        return ans;
    }
};

int main()
{
    return 0;
}