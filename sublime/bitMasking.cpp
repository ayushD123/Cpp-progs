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



int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n,0);

    for(int i=0;i<n;++i){
        int day;
        cin>>day;
        int mask=0;
        for(int j=0;j<day;++j){
            int ind;
            cin>>ind;
            mask=(mask | (1<<ind));


        }
        v[i]=mask;
    }

    // for(auto it:v){
    //     cout<<it<<endl;
    // }
    int max=0;
    int p1;
    int p2;



    for(int i=0;i<n;++i){
        

        for(int j=i+1;j<n;++j){
            int intsec=(v[i] & v[j]);
             int common_days=__builtin_popcount(intsec);
             if(common_days>max){
                max=common_days;
                p1=i+1;
                p2=j+1;
             }


        }

    }
    cout<<"person "<<p1<<" and person "<<p2<<" can work for "<<max<<" common days";

    
    

}