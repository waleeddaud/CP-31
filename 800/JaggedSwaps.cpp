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
    int t, n, i;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> arr(n);
        for(i=0;i<n;i++){
            cin >> arr[i];
        }
        (arr[0]==1) ? cout<<"YES\n" : cout<<"NO\n";
        
    }
    return 0;
}