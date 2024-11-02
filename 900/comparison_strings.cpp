#include<iostream>
#include<string>
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
    int t , n, k, i;
    string words;
    cin >> t;
    while(t--){
       int s, i;
       cin >> s;
       cin.ignore();
       getline(cin,words); 
       int count =0;
       int res = INT_MIN;
       for(i=0;i<s;i++){
            if(words[i] == '<'){
                while(i<s && words[i]=='<'){
                    count ++;
                    i++;
                }
                i--;
            }else if(words[i] == '>'){
                while(i<s && words[i]=='>'){
                    count += 1;
                    i++;
                }
                i--;
            }
            //cout<<"Count : "<<count<<" res: "<<res<<endl;
            res = max(res, count);
            count = 0;
       }
       res++;
       cout << res << endl;
    }  
    return 0;
}