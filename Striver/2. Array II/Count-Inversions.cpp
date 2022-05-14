//Inversion is a pair in an array such that : i) Its index j>i
                                        //   ii) Also, a[i]>a[j]
//Brute Force: Iterating over all pairs in an array 
//Time Complexity: O(n^2)
//Optimized approach: Using merge sort technique and counting inversions while merging the two sorted arrays
//Time Complexity: O(n)

#include <bits/stdc++.h> 

long long mergeSort(long long *arr,int l,int m,int r)
{
	long long inv = 0;
    int n1 = m - l + 1;
    int n2 = r - m;
    long long a[n1];
    long long b[n2];

    for (int i = 0; i < n1; i++)
        a[i] = arr[l + i];

    for (int i = 0; i < n2; i++)
        b[i] = arr[m + i + 1];
    
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            inv += n1 - i;
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    return inv;
}


long long merge(long long *arr, int low,int high)
{
	long long  inversion = 0;
	if(low<high)
	{
		int mid = (low + high)/2;
		inversion+=merge(arr,low,mid);
		inversion+=merge(arr,mid+1,high);
		inversion+=mergeSort(arr,low,mid,high);
	}
	return inversion;
}


long long getInversions(long long *arr, int n){
    // Write your code here.
	long long int ans = merge(arr,0,n-1);
	return ans;
}