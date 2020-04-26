#include<bits/stdc++.h>

using namespace std ;

// Kadane's Algorithm is used for finding the largest contiguous subarray sum .

int kadanes(vector<int> arr , int n )
{
    vector<int> prefix(n) ;
    prefix[0] = arr[0] ;
    int i,maximum ;
    for(i=1;i<n;i++)
    {
        prefix[i] = max(prefix[i-1]+arr[i], arr[i]) ;
    }
    maximum= prefix[0] ;
    for(auto x : prefix)
    {
        if(x>maximum)
            maximum = x ;
    }
    return maximum ;
}


int main()
{
    int n ; // size of the array 
    cin>>n ;
    vector<int> arr(n) ;

    int i ;
    for(i=0;i<n;i++)
    {
        cin>>arr[i] ;
    }

    cout<<kadanes(arr, n) ;
    return 0 ;
}