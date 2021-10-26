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

vector<string> v;

void solve(int ip,string op,int one,int zero){
    if(ip==0){
        v.push_back(op);
        return;
    }
    
    if(one!=0){
        string op1=op;
        op1.push_back('1');
        solve(ip-1,op1,one-1,zero);

    }

    if(zero>one){
        string op2=op;
        op2.push_back('0');
        solve(ip-1,op2,one,zero-1);
    }
}



int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    int ip;
    cin>>ip;
    string op="";
    int one=ip;
    int zero=ip;
    
    solve(ip,op,one,zero);


    for(auto it:v){
        cout<<it<<endl;
    }


   

}