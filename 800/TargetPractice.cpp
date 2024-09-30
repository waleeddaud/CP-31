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
int count(vector<vector<char>>&arr, int i){
    int sum = 0;
    for(int j=i;j<10-i;j++){
        if(arr[i][j] == 'X'){
            sum++;
        }
        if(arr[10-i-1][j] == 'X'){
            sum++;
        }
    }
    for(int j=i+1;j<10-i-1;j++){
        if(arr[j][i] == 'X'){
            sum++;
        }
        if(arr[j][10-i-1] == 'X'){
            sum++;
        }
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    vector<vector<char>> arr(10, vector<char> (10, ' '));
    while(t--){
        int i,j;
        for(i=0;i<10;i++)
            for(j=0;j<10;j++)
                cin >> arr[i][j];
        int sum =0;
        for(int i=0;i<5;i++){
            int ans = count(arr,i);
            //cout<<ans<<" "<<i+1<<endl;
            sum += ans * (i+1);
        }
        cout<<sum<<endl;

    }
    return 0;
}