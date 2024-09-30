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
        int n, m;
        cin>>n>>m;
        cin.ignore();
        string x,s;
        getline(cin, x);
        getline(cin, s);
        int count = 0;
        bool flag =0;
        while(x.length() < s.length()){
            x += x;
            count++;
        }
        if(x.find(s) == string::npos){
            x+= x;
            count++;
        }
        if(x.find(s) == string::npos)    cout<<-1;
        else cout<<count;
        cout<<"\n";
    }
    return 0;
}
