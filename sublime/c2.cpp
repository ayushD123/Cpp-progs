#include<bits/stdc++.h>
using namespace std;


int lcccm(int d,int e){
   for(int  m=0;m<=d*e;++m){
      if(m%d==0 && m%e==0){
         return m;
      }
   }
}

int main(){

   int a,b,c;
   int count=0;
   int i=1;
   cin>>a>>b>>c;
   int val;

   while(count!=c){
      if(i%a==0 || i%b==0){
         val=i;
         count++;
      }
      i++;
   }

   int lcm=lcccm(a,b);


   // for(int j=2;j<=a*b;j++){
   //    if(j%a==0 && j%b==0){
   //       lcm=j;
   //       break;
   //    }

   // }
   cout<<lcm<<endl;
   int step;

   if(val%a==0){
      step=a;
   }
   if(val%b==0){
      step=b;
   }if(val%a==0 && val%b==0){
      step=lcm;
   }
   
   cout<<val<<endl;
   cout<<step<<endl;

   for(int j=val;j>=0;j=j-step){
      cout<<j<<" ";
   }
   
}