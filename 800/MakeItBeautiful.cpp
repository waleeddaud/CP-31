//We need to ensure that sum of first element is not equal to second element and so on
//By putting maximum in first and minimum on second position, if they are equal answer is no else answer is yes
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
void solve(){
    int n, i;
    cin >> n;
    vector<int> arr(n);
    for(i=0;i<n;i++)
        cin >> arr[i];
    sort(arr.begin(),arr.end(), greater<int>());
    swap(arr[1], arr[n-1]);
    if(arr[1]==arr[0]){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        for(i=0;i<n;i++)
            cout<< arr[i]<<" ";
        cout<<"\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }    
    return 0;
}