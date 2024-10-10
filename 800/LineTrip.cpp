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
    int t, n, x, i;
    cin >> t;
    while(t--){
        cin >> n >> x;
        vector<int> arr(n);
        for(i=0;i<n;i++){
            cin >> arr[i];
        }
        int dist = arr[0];
        for(i=1;i<n;i++){
            dist = max(dist, arr[i]-arr[i-1]);
        }
        int final = 2 * (x - arr[n-1]);
        dist = max(dist, final);
        cout << dist<<"\n";


    }
    return 0;
}