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
    int t, n, i;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> arr(n);
        vector<int> b(n);
        for(i=0;i<n;i++){
            cin >>arr[i]; 
            b[i] = n+ 1-arr[i];
            cout<<b[i]<<" ";
        }
        cout<<"\n";        
    }
    return 0;
}
//1 2 4 5 3
//5 4 2 1 3
//6 6 6 6 6
