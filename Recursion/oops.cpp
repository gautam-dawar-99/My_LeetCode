// #include <iostream>
// using namespace std;
// class student{
//     public:
//     string name;
//     int roll_no;
//     float marks;
// };
// int main() {
//     student s1;
//     cout << "Enter student's name: ";
//     cin >> s1.name;
//     cout << "Enter student's roll number: ";
//     cin >> s1.roll_no;
//     cout << "Enter student's marks: ";
//     cin >> s1.marks;
//     cout << "Student's Name: " << s1.name << endl;
//     cout << "Student's Roll Number: " << s1.roll_no << endl;
//     cout << "Student's Marks: " << s1.marks << endl;
//     float avg_marks = s1.marks / 3;
//     cout << "Student's Average Marks: " << avg_marks << endl;
//     return 0;
// }


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
