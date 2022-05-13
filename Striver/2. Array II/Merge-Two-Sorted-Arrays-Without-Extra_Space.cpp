#include<bits/stdc++.h>
using namespace std;

//here we start from the last of both the arrays
//start comparing the last ones and storing them in m+n-1
//till one of the array is finished 
//Now we look that the array left is the second one or not 
//if yes then the traverse the 2nd array and place the element from backwards where we left

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0)
        {
            nums1.swap(nums2);
        }
            
        else
        {
            int i=m-1,j=n-1,k=m+n-1;
            for(;k>=0 && i>=0 && j>=0;k--)
            {
                if(nums1[i]>nums2[j])
                {
                    nums1[k]=nums1[i];
                    i--;
                }
                else if (nums2[j]>=nums1[i])
                {
                    nums1[k]=nums2[j];
                    j--;
                }
            }
            while(k>=0 && j>=0)
            {
                nums1[k]=nums2[j];
                k--,j--;
            }
        }
        // cout<<i<<" "<<j<<" ";
    }
};

int main()
{
    return 0;
}