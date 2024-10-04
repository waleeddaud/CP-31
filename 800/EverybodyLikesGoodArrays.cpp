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
    int t, n, i,count;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> arr(n);
        for(i=0;i<n;i++)
            cin >> arr[i];
        count = 0;
        for(i=0;i<n-1;i++){
            if(arr[i]%2==0 && arr[i+1]%2==0){
                count++;
                arr[i+1] = arr[i]*arr[i+1];
            }else if(arr[i]%2!=0&&arr[i+1]%2!=0){
                count++;
                arr[i+1] = arr[i]*arr[i+1];
            }else continue;
        }
        cout<<count<<"\n";
    }
    return 0;
}