#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

typedef long long int lln;
typedef long long ll;
#define R for (auto i = 0; i < n; ++i)
#define V for (auto &val : v)
#define pb push_back
const double pi = 3.14159265358979323846;
#define debug(x) cout << #x << ' ' << x << endl


bool cmp(int a,int b){
    return a>b;
}

int main(){

   vector<int> v = { 10, 20, 30, 40, 50 };
  
    // Print elements of array
    cout << "Array contains :";
    for (int i = 0; i < 5; i++)
        cout << " " << v[i];
    cout << "\n";
  
    // using upper_bound
    auto it = upper_bound(v.begin(), v.end(), 35); 
    auto itr = upper_bound(v.begin(), v.end(), 45);

    cout<<((find(v.begin(),v.end(),30))-v.begin());
  
    // cout << "\nupper_bound for element 35 is at position : " 
    //           << (it-v.begin());
    // cout << "\nupper_bound for element 45 is at position : "
    //           << (itr-v.begin());
}