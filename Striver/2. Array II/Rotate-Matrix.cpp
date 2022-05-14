#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void rotate(vector<vector<int>>& a) {
        int m = a.size();
        int n = a[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j = i; j<n-1-i;j++)
            {
                int temp = a[j][n-1-i];
                a[j][n-1-i] = a[i][j];
                
                int temp2 = a[m-1-i][n-1-j];
                a[m-1-i][n-1-j] = temp;
                
                temp = a[m-1-j][i];
                a[m-1-j][i] = temp2;
                
                a[i][j] = temp;
            }
        }
    }
};


 int main()
 {
     return 0;
 }