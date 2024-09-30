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
    int t,n,k;
    cin >> t;
    while(t--){
        cin >>n>>k;
        vector<int> arr(n);
        bool flag =0;
        for(int  i=0;i<n;i++){
            cin >>arr[i];
            if(arr[i] == k) flag =1;
        }
        (flag) ? cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}