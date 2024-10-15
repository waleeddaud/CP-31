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
    int t, n,  i;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        
        for(i=0;i<n;i++){
            cin >> arr[i];
            sum ^= arr[i];
        }
        if(n%2 == 0 && sum != 0){
            cout<<"-1\n";
        }else
            cout<<sum<<"\n";
    }
return 0;
}   