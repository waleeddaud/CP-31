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
        for(i=0;i<n;i++)
            cin >> arr[i];
        int diff, mini = INT_MAX, num1, num2;
        bool flag = 1;
        for(i=1;i<n;i++){
            //minimize diff if positive
            diff = arr[i] - arr[i-1];
            if(diff >= 0 ){
                if(mini > diff){
                    num1 = arr[i-1];
                    num2 = arr[i];
                    mini = diff;
                }
            }
            else{
                flag =0;
                break;
            }
        }
        flag ? cout << mini/2 +1<<"\n" : cout<<0<<"\n";
    }
    return 0;
}