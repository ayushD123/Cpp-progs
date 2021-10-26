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



void solve(stack<int> &s,int k){
    if(k==1){
        s.pop();
        return;
    }
    int temp=s.top();
    s.pop();
    solve(s,k-1);
    s.push(temp);
}





int main(){

    int t;
    cin>>t;

    while(t--){
        

      
        int n,k;
        cin>>n;
        
        stack<int> s1;
        stack<int> s2;
        

     

        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            s1.push(x);
            s2.push(x);
        }

        while(!s2.empty()){
            cout<<s2.top()<<endl;
            s2.pop();
        }
        cout<<endl;
        k=(n/2)+1;

        solve(s1,k);

        

         while(!s1.empty()){
            cout<<s1.top()<<endl;
            s1.pop();
        }

        


    }
}