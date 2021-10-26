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

double esp=1e-6;

double  root(int n,int k){
    double lo=1;
    double hi=n;

    while(hi-lo>esp){
        double mid=lo+(hi-lo)/2;

        if(pow(mid,k)<n){
            lo=mid;
        }else{
            hi=mid;
        }
    }

    return lo;
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,k;
    cin>>n>>k;

    cout<<root(n,k);
    

}