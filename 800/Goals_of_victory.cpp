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
    int t, size, i, val;
    cin >> t;
    while(t--){
        cin >> size;
        int sum = 0;
        for(i=0;i<size-1;i++){
            cin >> val;
            sum += val;
        }
        cout << -sum << endl;
    }
    return 0;
}