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
    int t , x;
    cin >> t;
    while(t--){
        cin >> x;
        int count = 0, len=0, temp =x;
        //single digit 1-9 , 
        //double digit 10 - 90
        //max length = 6;
        int last_digit;
        while(temp > 0){
            last_digit = temp;
            temp /= 10;
            len++;
        }
        count += last_digit;
        len--;
        while(len > 0){
            count += 9;
            len--;
        }
        cout<< count<<"\n";
    }
    return 0;
}