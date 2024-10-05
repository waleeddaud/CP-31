// // #include<iostream>
// // #include<algorithm>
// // #include<iomanip>
// // #include<limits.h>
// // #include<vector>
// // #include<list>
// // #include<queue>
// // #include<stack>
// // #include<map>
// // #include<unordered_map>
// // #include<set>
// // using namespace std;
// // int main()
// // {
// //     int t, n, i,minus, ones, count, mul;
// //     cin >> t;
// //     while(t--){
// //         minus = 0, mul =0;
// //         cin >> n;
// //         vector<int> arr(n);
// //         for(i=0;i<n;i++){
// //             cin >> arr[i] ;
// //             if(arr[i] == -1)
// //                 minus++;
// //         }
// //         ones = n - minus;
// //         count =0;
// //         int temp1 = minus;
// //         int temp2 = ones;
// //         if(n == minus){
// //             count = n;
// //         }
// //         if(minus > ones){
// //             count = (minus - ones + 1) / 2;
// //         }
// //         if(temp1 %2 != 0){
// //             mul = 1;
// //         }
// //         cout<<max(count, mul)<<"\n";
        
// //     }
// //     return 0;
// // }
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int t, n, i, minus, ones, count, mul;
//     cin >> t;

//     while(t--) {
//         minus = 0, mul = 0;
//         cin >> n;
//         vector<int> arr(n);

//         // Reading the array and counting the number of -1's
//         for(i = 0; i < n; i++) {
//             cin >> arr[i];
//             if(arr[i] == -1)
//                 minus++;
//         }

//         ones = n - minus;  // Number of 1's
//         count = 0;  // To store the number of operations needed

//         // If all elements are -1
//         if(n == minus) {
//             count = n;  // Need to flip all to 1 to make the sum non-negative
            
//         } else {
//             // First, ensure the sum condition: sum must be non-negative
//             if(minus > ones) {
//                 count = (minus - ones + 1) / 2;  // Operations to balance -1's and 1's
//             }
//             // Second, ensure the product condition: product must be 1
//             if(minus % 2 != 0) {
//                 mul = 1;  // If minus count is odd, flip one more -1 to 1
//             }
//         }

//         // Output the total number of operations needed
//         cout << count + mul << "\n";
//     }

//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int minus = 0, ones = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == -1) minus++;
            else ones++;
        }
        int count = 0;
        if (minus > ones) {
            count = (minus - ones + 1) / 2;
            minus -= count;
        }
        if (minus % 2 != 0) {
            count++;
        }
        cout << count << "\n";
    }

    return 0;
}
