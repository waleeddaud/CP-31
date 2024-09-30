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
    int n;
    cin >> n;
    vector<int> arr(n);
    //maximize elements less than zero and minimize elements greater than zero
    int mini = 100001, maxi=-100001;
    bool flag =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] > 0){
            mini = min(arr[i],mini);
        }
        else if(arr[i]<0){
            maxi = max(arr[i], maxi);
        }
        else {
            flag =1;
            break;
        }
    }
    if(flag){
        cout<< 0;
    }else{
        cout<<min(mini, abs(maxi));
    }
    return 0;
}