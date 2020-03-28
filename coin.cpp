#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	double p;
	cin>>n;
	vector<double>dp(n+1);
	dp[0]=1;
	for(int i=0;i<n;i++){
		cin>>p;
		//~ cout<<"Work";	
		for(int ipro=i+1;ipro>=0;--ipro){	
			 //~ if(ipro==0){dp[ipro]=0; continue;}
			 dp[ipro]=(ipro==0?0:dp[ipro-1]*p) + (dp[ipro]*(1-p))	;
			 }
		}
	 double ans=0;
	 //~ cout<<dp[0]<<"0"<<endl;
	 for(int i=0;i<=n;i++){
		  //~ cout<<dp[i];
		  int t=n-i;
		if(i>t){
			   ans+=dp[i];}
		  }
	 printf("%.10f",ans);
	
	return 0;
	}


