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



     int n;
     cin>>n;

     while(n--){

        

        ump<char,int> mp={{'{',-1},{'[',-2},{'(',-3},{'}',1},{']',2},{')',3},};

        stack<char> st;
        string str;
        cin>>str;
        int flag=1;
        
        
        for(char brackets:str){
            if(mp[brackets]<0){
                st.push(brackets);
            }
            else{
                if(st.empty()){
                    
                    flag=0;
                    break;
                }
                char key=st.top();//we need a char key to access int value of mp for stack brakets
                st.pop();
                if((mp[brackets]+mp[key])!=0){
                    flag=0;
                    break;
                }
                

            }
        }

        if(st.empty() && flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        
     }

   

}
