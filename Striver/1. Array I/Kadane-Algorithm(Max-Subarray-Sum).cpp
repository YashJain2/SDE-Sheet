#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currAns = 0;
        int ans = INT_MIN;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            currAns += nums[i];
            ans = max(currAns,ans);
            // cout<<currAns<<" ";
            if(currAns<0)
                currAns=0;
        }
        return ans;
    }
};

int main()
{
    return 0;
}