#include<iostream>
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if(a == b){
            (c%2) ? cout << "First\n":cout<<"Second\n";
        }
        else if(a > b){
            cout<<"First\n";
        }else{
            cout<<"Second\n";
        }
    }
    return 0;
}