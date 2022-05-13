#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
        vector <vector<int>> temp;
        temp.push_back(nums);
    }
};

int main() {
    int a[] = {1,3,2,4};
    
    // next_permutation(arr,arr+3);//using in-built function of C++
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    int idx1=-1,idx2;
    int n = 4;
    //finding the index 1 the breakpoint such that a[i]<a[i+1]
    for(int i=1;i+1<n;i++)
    {
        if(a[i]<a[i+1])
        {
            idx1 = i;
            break;
        }
    }
    //If no index was found we have sorted array in decreasing order
    //we now just have to reverse the array
    if(idx!=-1)
    {
        //if we found the index
        //we look from back for the least maximum value
        //that we can swap
        for(int i = n-1 ; i>idx1;i--)
        {
            if(a[i]>a[idx1])
            {
                idx2  = i;
                break;
            }
        }
        swap(a[idx1],a[idx2]);
    }
    //reversing the rest array from (idx1 + 1)
    for(int i=idx1+1,j=n-1;i<n;i++,j--)
        swap(a[i],a[j]);

    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3];
    return 0;
}