// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     map<int, char> mp;
//     char ch = 'a';
//     int n = 1;

//     // Initialize the unordered_map
//     for (int i = 0; i < 26; ++i) {
//         mp[n] = ch;
//         n++;
//         ch++;
//     }

//     // Print the elements of the unordered_map
//     for (const auto& it : mp) {
//         cout << it.first << " " << it.second << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main() {
	unordered_map <int,char> mp(26);
	char ch='a';
	int n=1;
	for(auto it : mp){
		// it.first=n;
		// it.second=ch;
		mp[n]=ch;
		n++;
		ch++;
	}
	for(auto it : mp){
		cout<<it.first<<" "<<it.second<<endl;
	}

	return 0;
}