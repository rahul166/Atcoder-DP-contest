#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int n,k;
	cin>>n>>k;
	
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		}
	
	vector<bool>dp(k+1);
	
	for(int s=0;s<=k;s++){
		for(int j=0;j<n;j++){
			if(s>=v[j] && (!dp[s-v[j]])){
				dp[s]=true;
				
				}	
			}
		}
		if(dp[k]){cout<<"First"<<endl;}
		else{cout<<"Second";}
	
	return 0;
	}
