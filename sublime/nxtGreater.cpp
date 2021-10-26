#include <bits/stdc++.h>
using namespace std;

typedef long long int lln;
typedef long long ll;
#define R for (auto i = 0; i < n; ++i)
#define V for (auto &val : v)
#define pb push_back
#define ump unordered_map 
const double pi = 3.14159265358979323846;
#define debug(x) cout << #x << ' ' << x << endl

int main()
{



    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<map<int,int>> mp;



     int n;
     int flag=1;
     cin>>n;

     vector<int> v(n);

     for(int i=0;i<n;++i){
        cin>>v[i];
     }

     stack<int> s;

     s.push(v[0]);

     // for(auto it:v){
     //    cout<<it<<endl;
     // }

     for(int i=1;i<n;++i){
        if(s.top()<v[i]){
            while(!s.empty() && s.top()<v[i]){
            flag=0;
            mp.pb({s.top(),v[i]});
            s.pop();
        }
        s.push(v[i]);
            }else{
                s.push(v[i]);

        }
     }

     while(!s.empty()){
        mp.pb({s.top(),-1});
        s.pop();
     }

     for(auto it:mp){
        cout<<(it).first<<" "<<(it).second<<endl;
     }

     // cout<<flag;

   

}
