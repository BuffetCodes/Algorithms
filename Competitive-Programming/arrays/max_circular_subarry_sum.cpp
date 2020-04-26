#include<bits/stdc++.h>

using namespace std ;

int max_circular_subarray_sum(vector<int> arr, int n)
{
    vector<int> max_prefix(n) ;
    vector<int> min_prefix(n) ;

    max_prefix[0] =  min_prefix[0] = arr[0] ;
    int i ;
    for(i=1;i<n;i++)
    {
        max_prefix[i] = max(max_prefix[i-1]+arr[i], arr[i]) ;
        min_prefix[i] = min(min_prefix[i-1]+arr[i], arr[i]) ;
    }

    int maximum = max_prefix[0] , minimum = min_prefix[0] ;
    for(auto x : max_prefix) 
    {
        if(x>maximum)
            maximum = x ;
    }

    int sum = 0 ;
    for(auto x : arr)
    {
        sum+=x ;
    }
    for(auto x : min_prefix)
    {
        if(x<minimum)
            minimum = x ;
    }

    return max(maximum , sum - minimum) ;

}


int main()
{
    int n ;
    cin>>n ;
    vector<int> arr(n) ;
    int i ;
    for(i=0;i<n;i++)
    {
        cin>>arr[i] ;
    }

    cout<<max_circular_subarray_sum(arr,n)<<endl ;

}