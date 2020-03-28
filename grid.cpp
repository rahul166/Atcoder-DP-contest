#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;
//const int inf=1e5+9;
int dp[1000][1000];
int visited[1000][1000];
//int dp[0][0]=0;
int main_dfs(int i,int j,int h,int w,vector<vector<char>> &v){
 //~ cout<<i<<j<<endl;
if(i==h-1 && j==w-1){return 1;}
if(i>=h || j>=w){return 0;}
if(v[i][j]=='#'){return 0;}

if(visited[i][j]){
return dp[i][j];}

visited[i][j]=1;
dp[i][j]=main_dfs(i,j+1,h,w,v)+main_dfs(i+1,j,h,w,v);

return dp[i][j];
}



int main(){
   int h,w;
 cin>>h>>w;
vector<vector<char>>v;

for(int i=0;i<h;i++)
{
vector<char>temp(w);
for(int j=0;j<w;j++)
{
  cin>>temp[j];
	}
v.push_back(temp);
}
int ans=main_dfs(0,0,h,w,v);
if(ans>mod){ans=ans-mod;}
cout<<ans;

//~ for(int i=0;i<h;i++)
//~ {
  //~ for(int j=0;j<w;j++)
  //~ {	
	//~ cout<<dp[i][j];
	//~ }
//~ }


return 0;
}




















