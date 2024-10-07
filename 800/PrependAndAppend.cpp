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
    int t, size, l, r;
    string given;
    cin >> t;
    while(t--){
        cin >> size;
        cin >> given;
        l = 0, r = size - 1;
        while(true){
            if((given[l]=='1' && given[r]=='0') || (given[l]=='0'&&given[r]=='1')){
                l++;
                r--;
            }else break;
        }
        int ans = r- l + 1;
        ans >= 0 ? cout << ans : cout << 0;
        cout<<endl; 
    }
    return 0;
}