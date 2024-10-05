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
    int t , n , count;
    cin >> t;
    while(t--){
        cin >> n;
        if(n%3 == 1 || n%3 ==2){
            cout<< "First\n";
        }else cout<<"Second\n";
    }
    return 0;
}