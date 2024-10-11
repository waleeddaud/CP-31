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
    //just make sure two same elements are not in different arrays
    int t, n, i, j;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> arr(n);
        for(i=0;i<n;i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        vector<int> A;
        vector<int> B;
        A.push_back(arr[0]);
        for(i=1;i<n;i++){
            if(arr[i]!= arr[i-1]){
                break;
            }
            A.push_back(arr[i]);
        }
        for(j=i;j<n;j++){
            B.push_back(arr[j]);
        }
        if(B.size() == 0){
            cout<<"-1\n";
        }
        else{
            cout<<A.size()<<" "<<B.size()<<'\n';
            for(i=0;i<A.size();i++)    cout<<A[i]<<" ";
            cout<<"\n";
            for(i=0;i<B.size();i++) cout<<B[i]<<" ";
            cout<<endl;
        }
    }
 
    return 0;
}