#include<bits/stdc++.h>

using namespace std ;

void move(int N, int from, int to, int aux, int &moves)
{
    if(N>=1){
        move(N-1,from, aux, to, moves) ;
        moves++ ;
        cout<<"Move disk "<<N<<" from tower "<<from<<" to tower "<<to<<endl ;
        move(N-1, aux, to, from, moves) ;
    }
}



int main()
{
    int N ; // N is the number of rings in the tower
    cin>>N ;
    int moves = 0 ;
    move(N,1,3,2,moves) ;
    cout<<"Total moves required: "<<moves ;
    return 0 ;
}