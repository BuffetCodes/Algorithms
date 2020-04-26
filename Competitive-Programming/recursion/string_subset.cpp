#include<bits/stdc++.h>

using namespace std ;

void substring(string sub ,string str, int index , int n)
{
    cout<<"Hello" ;  
    substring(sub+str[index] , str , index+1,n) ;
    substring(sub,str,index+1,n) ;

    if(index==n)
    {    cout<<sub ;
        return ;
    }
}



int main()
{
    string s ;
    cin>>s ;
    string sub = " " ;
    cout<<s<<" "<<sub<<endl ;
    substring(sub,s,0,3) ;
    return 0 ;
}