#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,k;
	cin>>n>>k;
	vector<int>v;
	for(int i=0;i<n;i++){
	    cin>>x;
	    v.push_back(x);
	}
	vector<int>result(n,INT_MAX);
	result[0]=0;
	for(int i=0;i<n;i++){
	    for(int j=i+1;j<=i+k;j++){
                if(j<n){
	            result[j]=min(result[j],abs(v[i]-v[j])+result[i]);}
	    }
	}
// 	for(auto it=result.begin();it!=result.end();it++){cout<<*it<<endl;}
	cout<<*(result.end()-1);

	return 0;
}





