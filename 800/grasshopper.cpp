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
    int t, x, k;
    cin >> t;
    while(t--){
        cin >> x >> k;
        if( (((x%k)+k)%k) == 0){
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl; 
        }else{
            cout<<1<<"\n"<<x<<"\n";
        }
    }
    return 0;
}