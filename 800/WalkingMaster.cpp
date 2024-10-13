#include<iostream>
#include<algorithm>
#include<iomanip>
#include<limits.h>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include<set>
using namespace std;
int main()
{
    int t, a, b, c, d;
    cin >> t;
    while(t--){
        cin >> a >>b>>c >>d;
        //get d equal to b 
        if(d<b){
            cout<<-1<<"\n";
            continue;
        }
        int moves = 0;
        moves = d - b;
        a += moves;
        b += moves;
        if(c > a){
            cout<<"-1\n";
            continue;
        }
        int removal = a-c;

        cout<<moves+removal <<"\n";
    }
    return 0;
}