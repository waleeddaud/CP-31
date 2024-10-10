#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t,n,i;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> arr(n);
        for(i=0;i<n;i++){
            cin >> arr[i];
        }
        vector<int> ans;
        ans.push_back(arr[0]);
        for(i=1;i<n;i++){
            if(arr[i-1]>arr[i])
                ans.push_back(arr[i]);
            ans.push_back(arr[i]);
        }  
        cout<<ans.size()<<"\n";      
        for(i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
