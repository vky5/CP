
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long int;

int main(){
    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);
    
    ll n; cin>>n;
    
    vector<ll> ls(n), sorted;
    for (int i = 0; i<n; i++) cin>>ls[i];
    sorted = ls;
    sort(sorted.begin(), sorted.end());
    ll count = 0;
    for (int i = 0; i<n; i++){
        if (ls[i]!=sorted[i]) count++;
    }
    
    cout<<count-1<<endl;
    
    
}





// #include <iostream>
// #include <vector>


// using namespace std;
// using ll = long long int;

// int main(){
//     freopen("outofplace.in", "r", stdin);
//     freopen("outofplace.out", "w", stdout);
//     ll n; cin>>n; 
//     vector<ll> ls(n);
    
//     for (ll i = 0; i<n; i++){
//         cin>>ls[i];
//     }
    
//     ll pr = -1, dir = -1;

//     // checking the first nmer
//     if (ls[0]>ls[1]){
//         pr = 0;
//         dir = +1;
//     }else if (ls[n-1]<ls[n-2]){ // checking the last number
//         pr = n-1;
//         dir = -1;
//     }
    
//     for (ll i = 1; i+1<n && pr == -1; i++){ // we are gonna check from 1 to n -2 as i value can be this only 
//         // and update 
//         if (ls[i-1]>ls[i]){
//             pr = i;
//             dir = -1;
            
//         }else if (ls[i]>ls[i+1]){
//             pr = i;
//             dir = 1;
//         }
//     }
    
//     int count = 0;
//     // cout<<"---------------------"<<endl;
//     for (ll i = pr + dir; i<n && i>=0; i+=dir){
//         // -1 means that 4 10 3
//         // cout<<i<<endl;
//         if (dir==-1 && ls[i]<=ls[pr]){
//             break;
//         }else if(dir==1 && ls[i]>=ls[pr]){ // 10 3  5 9 11
//             break;
//         }else{
//             if (ls[i]!=ls[i+dir]){
//                 count++;
//             }
//         }
//     }
    
//     cout<<count<<endl;
    
//     /*
//     this solution is kidna implementation based. We checked for the wrong cow bessie position and the direction which is correct for the 
//     cow and then try to simulate the movement. If there are contious numbers that are equal to each other such as 2 2 2 2 then we only need
//     one swap for 4 numbers that is what ls[i] != ls[i+dir] is for. 
//     The best part about this question is how easy it is to solve this problem because it is not taht implementation heavy
    
//     for exampple in the question the test case is 
    
//     6
//     2 4 7 7 9 3
    
//     sorted version
//     2 3 4 7 7 9
    
//     we just need to calculate the difference in not sorted arry and the array that is already sorted
//     u can test this for more test case
//     */ 
    
// }