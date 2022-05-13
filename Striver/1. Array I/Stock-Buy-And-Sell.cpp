#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1)
            return 0;
        vector <int> temp;
        //calculating profit for 1 day trades
        for(int i=1;i<prices.size();i++)
        {
            temp.push_back(prices[i]-prices[i-1]);
        }
        //applying kadane algo for the max profit 
        int currSum = 0,sum = INT_MIN;
        for(int i=0;i<temp.size();i++)
        {
            currSum += temp[i];
            if(currSum<0)
                currSum=0;
            sum = max(currSum,sum);
        }
        return sum;
    }
};


int main()
{
    return 0;
}