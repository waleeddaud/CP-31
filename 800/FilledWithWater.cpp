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
    int t, n, i, res, count;
    string given;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> given;
        count = 0;
        res = 0;
        bool flag =0;
        for(i=0; i<n; i++){
            if(given[i]=='.'){
                count++;
                if(count == 3){
                    flag =1;
                    break;
                }
            }
            else if(given[i]=='#'){
                res += count;
                count = 0;
            }
        }
        res+= count;
        flag ? cout<<2<<"\n" : cout<<res <<'\n'; 

    }
    return 0;
}