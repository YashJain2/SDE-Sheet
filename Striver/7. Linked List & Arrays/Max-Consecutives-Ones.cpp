#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int ans = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i]==0)
            {
                ans = max(count,ans);
                count = 0;
            }
            else
                count++;
        }
        ans = max(ans,count);
        return ans;
    }
};

int main()
{
    return 0;
}