#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> temp(numRows);
        for(int i=0,j=1;i<numRows;i++,j++)
        {
            temp[i].push_back(1);
            double ans =1;
            for(int k=1,l=0;k<j;k++,l++)
            {
                ans = (ans*(i-l))/(k);
                // cout<<ans<<" ";
                temp[i].push_back(ans);
            }
        }
        return temp;
    }
};

int main()
{
    return 0;
}