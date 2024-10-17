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
     cin.ignore();
     string arr;
    while(t--){
        int count = 0;
        getline(cin , arr);
        int i;
        stack<char> st;
        st.push(arr[0]);
        for(i=1;i<arr.length();i++){
            if(!st.empty() && st.top() != arr[i]){
                count++;
                st.pop();
            }else{
                st.push(arr[i]);
            }
        }
        if(count % 2 != 0){
            cout << "DA\n";
        }else{
            cout<<"NET\n";
        }
    }
    return 0;
}