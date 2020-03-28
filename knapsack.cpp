// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,W,w,v;
//     cin>>n>>W;
//     vector<long long>dp(W+1);
//     for(int i=0;i<n;i++){
//         // cout<<"working;";
//         cin>>w>>v;
//         for(int k=W-w;k>=0;k--){
//             dp[k+w]=max(dp[k+w],v+dp[k]);
//         }
//     }
//     cout<<*max_element(dp.begin(),dp.end());
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

const int inf=1e5+9;
int dp[inf];
// dp[0]=0;
int main_dfs(int v,vector<int> &visited,map<int,vector<int>> &ma){
visited[v]=1;
// cout<<v;
for(int neigh=0;neigh<ma[v].size();neigh++){
    //  int path=0;
        if(visited[ma[v][neigh]]==0){
                dp[v]=max(dp[v],main_dfs(ma[v][neigh],visited,ma));
                // dp[v]=path;
                }
        else
        {   
            dp[v]=max(dp[v],1+dp[ma[v][neigh]]);
        }
        
}

return 1+dp[v];
}
int main(){
int n,m,v1,v2;
cin>>n>>m;

map<int,vector<int>>ma;
vector<int>visited(n,0);
for(int i=0;i<m;i++){
cin>>v1>>v2;
ma[v1].push_back(v2);
}

for(int v=1;v<=n;v++){
        if(visited[v]==0){
                main_dfs(v,visited,ma);
        }
}
// for(int i=1;i<=n;i++){
//     cout<<dp[i]<<endl;
// }
cout<<*max_element(dp+1,dp+n+1);

return 0;
}


