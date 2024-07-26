#include<bits/stdc++.h>
using namespace std;
int maxPathSum(int a[],int b[],int n,int m){
	int i=0,j=0;
	int suma=0,sumb=0,ans=0;
	while(i<n && j<m){
		if(a[i]<b[j]){
			suma+=a[i];
			i++;
		}
		else if(a[i]>b[j]){
			sumb+=b[j];
			j++;
		}
		else if(a[i]==b[j]){
			if(suma>sumb){
				ans+=suma;
			}
			else{
				ans+=sumb;
			}
			ans+=a[i];
			i++;
			j++;
			suma=0;
			sumb=0;
		}
	}

	while(i<n){
		suma+=a[i];
		i++;
	}
	while(j<m){
		sumb+=b[j];
		j++;
	}
	ans+=max(suma,sumb);
	return ans;

}

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int j=0;j<m;j++){
			cin>>b[j];
		}
		cout<<maxPathSum(a,b,n,m)<<endl;
	}
	return 0;
}