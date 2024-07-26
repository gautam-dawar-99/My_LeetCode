#include<bits/stdc++.h>
using namespace std;
void paranthesis(int n,int op,int cp,string ans){
	if(cp>op || op>n || cp>n)
		return  ;
	if(op==n && cp==n){
		cout<<ans<<endl;
		return  ;
	}

	paranthesis(n,op,cp+1,ans+')');
	paranthesis(n,op+1,cp,ans+'(');
}
int main() {
	int n;
	cin>>n;
	int op=0,cp=0;
	paranthesis(n,op,cp,"");
	// sort(str.begin(), str.end());
	// for(int i=0;i<n;i++){
	// 	cout<<str[i]<<endl;
	// }
	return 0;
}
