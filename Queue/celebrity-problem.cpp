#include<bits/stdc++.h>
using namespace std;

 int celebrity(vector<vector<int>>&M, int n){
        // code here 
        vector<int>adj[n+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(M[i][j]==1){
                    adj[i].push_back(j);
                }
            }
        }
        vector<int>::iterator it;
        for(int i=0;i<n;i++){
            if(adj[i].empty()){
                bool flag=1;
                for(int j=0;j<n;j++){
                    if(i==j)continue;
                    it=find(adj[j].begin(),adj[j].end(),i);
                    if(it==adj[j].end()){
                        flag=0;
                        break;
                    }
                }
                if(flag)
					return i;
            }
        }
        return -1;
    }

int main() {
	int n;
	cin>>n;
    vector<vector<int>>M(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>M[i][j];
		}
	}
	int Celebrity=celebrity(M,n);
    if(Celebrity!=-1){
      cout<<Celebrity<<endl;
    }else{
      cout<<"No Celebrity"<<endl;
    }
    return 0;
}