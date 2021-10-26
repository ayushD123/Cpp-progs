#include<bits/stdc++.h>

using namespace std;

// const int N=1e5+10;

// long long int pres[N];
const int N=1e3+10;	

int hsh[N][N];




int main(){

	// ios::sync_with_stdio(false);
 //  	cin.tie(0);




  	int m,n;
  	cin>>m>>n;
  	int arr[1000][1000];

  	for(int i=1;i<=m;++i){
  		for(int j=1;j<=n;++j){
  			cin>>arr[i][j];
  			if(arr[i][j]%2!=0){
  				arr[i][j]=1;

  			}else{
  				arr[i][j]=0;
  			}
  		}
  	}


  	for(int i=1;i<=m;++i){
  		for(int j=1;j<=n;++j){
  			hsh[i][j]=arr[i][j]+hsh[i][j-1]+hsh[i-1][j]-hsh[i-1][j-1];
  		}
  	}


  	int q;
  	cin>>q;

  	while(q--){
  		int a,b,c,d;
  		cin>>a>>b>>c>>d;


  	
  		


  	


  	cout<<hsh[c][d]-hsh[a-1][d]-hsh[c][b-1]+hsh[a-1][b-1]<<endl;


  	}


  	}

	
	

  	

	
	
