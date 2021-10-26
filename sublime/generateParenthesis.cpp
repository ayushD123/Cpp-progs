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

std::vector<string> v;

void parenth(string &s,int op,int cl){
    // cout<<s<<endl;
    if(op==0 && cl==0){
        v.push_back(s);
        return;
    }

    if(op!=0){
        s.push_back('(');
        parenth(s,op-1,cl);
        // cout<<"hell"<<endl;
        s.pop_back();
    }

    if(cl!=0){
        if(cl>op){
        s.push_back(')');
        parenth(s,op,cl-1);
        // cout<<"mell"<<endl;
        s.pop_back();
        }
        
    }
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;

        parenth(s,n,n);

        for(auto it:v){
            cout<<it<<endl;
        }

        
       // int a,b,c,d;
       // int ans;
       
       // cin>>a>>b>>c>>d;
       // ans=((a+b+c)/d);
       
       // if((a+b+c)<=d){
       //     cout<<1<<endl;
       // }else if((a+b)<=d || (b+c)<=d || (a+c)<=d){
       //  cout<<2<<endl;
       // }else{
       //     cout<<3<<endl;
       // }

        
       
    
        


    }
}