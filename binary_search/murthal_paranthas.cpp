#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int p,int mid,int n){
	int cnt=0;
	for(int i=0;i<n;i++){
		int x=(-arr[i]+sqrt(arr[i]*arr[i]+8*arr[i]*mid))/(2*arr[i]);
		cnt+=x;

	}
	return cnt>=p;
}
int main() {
	int p;
	cin>>p;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int lo=0,hi=1e6;
	int ans=0;
	while(lo<=hi){
		int mid=(lo+hi)/2;
		if(check(arr,p,mid,n)){
			ans=mid;
			hi=mid-1;
		}else{
			lo=mid+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}