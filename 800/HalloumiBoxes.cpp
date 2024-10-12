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
    int t, n, k, i;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> arr(n);
        for(i=0;i<n;i++)
            cin >> arr[i];
        bool flag =1;
        for(i=0;i<n-1;i++)
            if(arr[i] > arr[i+1]){
                flag = 0;
                break;
            }
        if(!flag && k==1)
            cout<<"NO\n";
        else    cout<<"YES\n";
    }
    return 0;
}