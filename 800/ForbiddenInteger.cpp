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
void solve(int n, int k, int x, vector<int>& ans, int sum,bool&flag){
    if(sum == n){
        flag =1;
        return;
    }
    else if(sum > n){
        return;
    }
    for(int i=k;i>=1 ;i--){
        if(i == x)  continue;
        //include
        ans.push_back(i);
        solve(n,k,x,ans,sum + i, flag);
        if(flag){
            return;
        }
        ans.pop_back();
    }
}
int main()
{
    int t,n,k,x,sum;
    cin>>t;
    while(t--){
        cin>>n>>k>>x;
        vector<int> ans;
        sum = 0;
        bool flag =0;
        solve(n,k,x,ans,sum,flag);
        if(flag){
            cout<<"YES\n";
            cout<<ans.size()<<"\n";
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}