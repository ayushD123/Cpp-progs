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


int solve(int k,int index,vector<int> &v){

    for(auto it:v){
        cout<<it<<" ";

    }
    cout<<"'"<<index<<"'"<<endl;
    cout<<endl;
    if(v.size()==1){
        return v[0];
    }
    index=(index+(k))%v.size();
    v.erase(v.begin()+index);
    solve(k,index,v);


}



int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int index=0;

    vector<int> v;

    for(int i=1;i<=n;++i){
        v.push_back(i);
    }
    
    cout<<solve(k-1,index,v);

    


    


   

}