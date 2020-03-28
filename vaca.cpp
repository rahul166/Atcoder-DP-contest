#include<bits/stdc++.h>

using namespace  std;
int main(){
    int n;
    cin>>n;
    vector<int>result(3);
    for(int d=0;d<n;d++){
        vector<int>inter(3,0);
        vector<int>h(3);
        for(int a=0;a<3;a++){
            cin>>h[a];
        }
        // cout<<"cool";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i!=j){
                inter[j]=max(inter[j],result[i]+h[j]);}
            }
        }
        result=inter;
    }
    cout<<*max_element(result.begin(),result.end());
    // cout<<*max_element(result.begin(),result.end());
    return 0;
}



