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
    int t,n,i,maxi,len;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> arr(n);
        for(i=0;i<n;i++){
            cin >> arr[i];
        }
        len =0;
        maxi = len;
        for(i=0;i<n;i++){
            if(arr[i] == 0)
                len++;
            else if(arr[i]==1){
                len =0;
            }
            maxi = max(maxi, len);
        }
        cout << maxi<<"\n";
    }
    return 0;
}