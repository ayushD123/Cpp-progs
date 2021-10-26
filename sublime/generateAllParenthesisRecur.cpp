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

void solve(string op,int o,int c){
    if(o==0 && c==0){
        v.push_back(op);
        return;
    }
    
    if(o!=0){
        string op1=op;
        op1.push_back('(');
        solve(op1,o-1,c);

    }

    if(c>o){
        string op2=op;
        op2.push_back(')');
        solve(op2,o,c-1);
    }
}



int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    int ip;
    cin>>ip;
    string op="";
    int o=ip;
    int c=ip;
    
    solve(op,o,c);


    for(auto it:v){
        cout<<it<<endl;
    }


   

}