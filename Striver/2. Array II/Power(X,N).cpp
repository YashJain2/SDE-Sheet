#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if(n==1)
            return x;
        else if (n==0 || x == 1.000)
            return 1.00;
        long long int power = abs(n);
        //brute force approach
        // double ans = x;
        // for(int i=1;i<power;i++)
        //     ans *= x;
        double ans = 1.0;
        while(power!=0)
        {
            if(power%2==0)
            {
                x = x * x;
                power/=2;
            }
            else{
                ans = ans * x;
                power -= 1;
            }
        }
        if(n>0)
            return ans;
        else
            return (1/ans);
    }
};

int main()
{
    return 0;
}