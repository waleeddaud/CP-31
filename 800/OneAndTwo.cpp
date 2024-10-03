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
    int t, n;
    cin>>t;
    while(t--){
        cin >> n;
        vector<int> arr(n);
        int i, count = 0 ;
        for(i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] == 2){ 
                count++;
            }
        }
        if(count&1){
            cout<<"-1\n";
        }else{
            int temp=0;
            for(i=0;i<n;i++){
                if(arr[i] == 2){
                    temp++;
                }
                if(temp == count/2){
                    break;
                }
            }
            cout<<i+1<<"\n";
        }


        // int ans = -1;
        // for(i = 0; i < n; i++){
        //     if(prefix[n] / prefix[i+1] == prefix[i+1]){
        //         ans = i+1;
        //         break;
        //     }
        // }
        // cout << ans << "\n";
    }
    return 0;
}
