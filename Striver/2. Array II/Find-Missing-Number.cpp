#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        
vector<int> repeatedNumber(const vector<int> &A) {
    //simpler approach is to create a substitute array to keep the count
    //of n integers
    //if count = 2 then the index value = A 
    //if count = 0 then the index value = B

    //Now we are using mathematical equations and summation formula

    long long int len = A.size();

    long long int S = (len * (len+1) ) /2;
    long long int P = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<A.size(); i++){
       S -= (long long int)A[i];
       P -= (long long int)A[i]*(long long int)A[i];
    }
     
    missingNumber = (S + P/S)/2;

    repeating = missingNumber - S;

    vector <int> ans;

    ans.push_back(repeating);
    ans.push_back(missingNumber);

    return ans;
}

vector<int> repeatedNumber1(const vector<int> &A) {
    //simpler approach is to create a substitute array to keep the count
    //of n integers
    //if count = 2 then the index value = A 
    //if count = 0 then the index value = B

    //Now we are using mathematical equations and summation formula

    //  long long int len = A.size();

    // long long int S = (len * (len+1) ) /2;
    // long long int P = (len * (len +1) *(2*len +1) )/6;
    // long long int missingNumber=0, repeating=0;
     
    // for(int i=0;i<A.size(); i++){
    //    S -= (long long int)A[i];
    //    P -= (long long int)A[i]*(long long int)A[i];
    // }
     
    // missingNumber = (S + P/S)/2;

    // repeating = missingNumber - S;

    // vector <int> ans;

    // ans.push_back(repeating);
    // ans.push_back(missingNumber);

    int x = 1,y=A[0];
    for(int i=2;i<=A.size();i++)
        x = x^i;
    for(int i = 1;i<A.size();i++)
        y = y^A[i];
    int z = x^y;

    int set_bit_no = z & ~(z - 1);
    int p=0,q=0; //p->missingNumber q->repeatedNumber

    for(int i = 0;i<A.size();i++)
    {
        if(A[i] & set_bit_no)
            p = p^A[i];
        else
            q = q^A[i];
    }
    for(int i = 1;i<=A.size();i++)
    {
        if(i & set_bit_no)
            p = p^i;
        else
            q = q^i;
    }
    
    int count=0;
    for(int i=0;i<A.size();i++)
        if(A[i]==p)
            count++;
    if(count!=0)
        return {p,q};
    else
        return {q,p};
}

};

int main()
{
    return 0;
}