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
    int t, n , i;
    cin >> t; 
    while(t--){
        cin >> n;
        vector<int> arr(n);
        map<int, int> mp;
        for(i=0;i<n;i++){
            cin >> arr[i];
            if(mp.find(arr[i]) == mp.end()){
                mp[arr[i]] = 1;
            }else{
                mp[arr[i]]++;
            }
        }
        if(mp.size() > 2){
            cout<<"NO\n";
        }else if(mp.size()==1){
            cout<<"YES\n";
        }
        else{
            int curr, prev;
            auto it = mp.begin();   
            curr = it->second;
            ++it;
            prev = it->second;
            if( abs(curr-prev) <=1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}