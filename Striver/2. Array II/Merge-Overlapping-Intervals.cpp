#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> temp;
        for(int i = 0; i < intervals.size() ; i++)
        {
            if(temp.empty() || intervals[i][0] > temp.back()[1])
                temp.push_back({intervals[i][0],intervals[i][1]});
            else
            {
                temp.back()[1] = max(temp.back()[1],intervals[i][1]);
            }
        }
        return temp;
    }
};

int main()
{
    return 0;
}