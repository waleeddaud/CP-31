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
    int t;
    cin >> t;
    while(t--){
        int size, even =0, odd = 0;
        cin >> size;
        vector<int> arr(size);
        for(int i=0;i<size;i++){
            cin >> arr[i];
            if(arr[i]&1){
                odd++;
            }else even ++;
        }
        (odd & 1) ? cout<< "NO\n" : cout<< "YES\n";
    }
    return 0;
}