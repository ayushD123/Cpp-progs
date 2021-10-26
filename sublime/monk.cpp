#include<bits/stdc++.h>
using namespace std;



int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
	string s;
	cin>>s;
	int result=0;
	
	

	for(int i=0;i<s.size();++i){
		if(s[i] >='a' && s[i] <='z'){
			s[i]=upper(s[i]);
			result=result+s[i];
			
		}else{
			s[i]=lower(s[i]);
			result=result-s[i];
			
		}
	}
	
	if(result<0){
		result=result*(-1);
	}

	int flag=1;

	for(int i=2;i<result;i++){
		if(result%i==0){
			flag=0;
			break;
		}
	}

	if(flag==0){
		cout<<0;
	}else{
		cout<<1;
	}
	
	// cout<<s<<endl;
	// cout<<result<<endl;


}