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
// void solve(){
//     int a, b;
//     cin >> a>> b;
//     int cnt =0;
//     while(a > b){
//         if(a == b){
//             b++;
//             cnt++;
//         }
//             cnt++;
//         a = a /b;
//     }
//     cout<<cnt<<"\n";
// }
int main()
{   
    int t;
    cin >> t;
    while(t--){
        stack<char> st;
        int size;
        cin >> size;
        cin.ignore();
        string s;
        getline(cin, s);
        for(int i=0;i<s.size();i++){
            if(s[i] =='(')
                st.push(s[i]);
            else if(s[i]==')' && !st.empty()){
                st.pop();
            }
        }
        cout<<st.size()<<'\n';
    }
    return 0;
}