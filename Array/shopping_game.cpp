// #include<iostream>
// using namespace std;
// int main() {
// 	int n;
// 	cin>>n;
// 	// for(int i=1;i<=n;i++){
// 		while(n--){
// 		int M,N;
// 		cin>>M>>N;
// 		int aayush=0,harshit=0;
// 		int cnt=1;
// 		while(1){

// 		if(cnt%2!=0){   // odd no
// 			aayush+=cnt;
// 		}
// 		else{
// 			harshit+=cnt;   //even no
// 		}
		
// 		if(aayush>M){
// 			cout<<"Harshit"<<endl;
// 			break;
// 		}
// 		else if(harshit>N){
// 			cout<<"Aayush"<<endl;
// 			break;
// 		}
// 		cnt++;
// 		}
// 	}
// 	return 0;
// }

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	
		while(n--){
		int M,N;
		cin>>M>>N;
		
		int aayush=0,harshit=0;
		int cnt=1;

		int x=(M>N)?M:N;

		for(int cnt=1;cnt<=x;cnt++){

		if(cnt%2!=0){
			aayush+=cnt;
		}
		else{
			harshit+=cnt;
		}

		if(aayush>M){
			cout<<"Harshit"<<endl;;
			break;
		}
		else if(harshit>N){
			cout<<"Aayush"<<endl;
			break;
			}
		}
	}
	return 0;
}