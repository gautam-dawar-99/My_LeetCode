#include<bits/stdc++.h>
using namespace std;
int count_hi(string str,int i){
	int cnt=0;
	if(i>=str.size()-1){
		return cnt;
	}
	if(str[i]=='h' && str[i+1]=='i'){
		cnt++;
	}
	return cnt+count_hi(str,i+1);
	
}
void remove_hi(string str,int i){
	if(i>=str.size()-1){
		cout<<str<<endl;
		return ;
	}
	if(str[i]=='h'&&str[i+1]=='i'){
		str.erase(i,2);
		remove_hi(str,i);
	} else{
		 remove_hi(str,i+1);
	}
}
void replace_hi(string str,int i){
	if(i>=str.size()-1){
		cout<<str<<endl;
		return ;
	}
	if(str[i]=='h'&&str[i+1]=='i'){
		str.replace(i,2,"bye");
		replace_hi(str,i+3);
	}
	else{
	 	replace_hi(str,i+1);
	}
}
int main() {
	string str;
	cin>>str;
	cout<<count_hi(str,0)<<endl;
	remove_hi(str,0);
	replace_hi(str,0);
	return 0;
}