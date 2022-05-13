#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //storing the position (r,c) where the matrix[i][j]==0
        vector<pair<int,int>> x;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    x.push_back(make_pair(i,j));   
                }
            }
        }
        // for(int i=0;i<x.size();i++)
        //     cout<<x[i].first<<" "<<x[i].second<<"\n";
        
        //traversing the stored position
        for(auto &i: x)
        {
            int r = i.first,c=i.second;
            for(int p=0;p<matrix.size();p++)
                matrix[p][c]=0;
            int temp = matrix[0].size();
            for(int p=0;p<temp;p++)
                matrix[r][p]=0;
        }
        
        //printing the matrix       
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                    cout<<matrix[i][j]<<" ";
            }            
        }
    }
};

int main (){
    return 0;
}