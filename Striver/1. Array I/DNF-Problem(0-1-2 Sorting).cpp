#include<bits/stdc++.h>
using namespace std

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high;
        int n = nums.size();
        high = n-1;
        while(mid<=high)
        {
            if(nums[mid]== 0)
            {
                nums[mid] = nums[low];
                nums[low] = 0;
                low++,mid++;
            }
            else if (nums[mid]==1)
            {
                mid++;
            }
            else
            {
                nums[mid] = nums[high];
                nums[high] = 2;
                high--;
            }
        }
    }
};

int main()
{
    return 0;
}