#include <iostream>
using namespace std;
int main() {
    for(int x='A';x<='Z';x++){
        cout<<char(x)<<" : "<< x<<endl;
    }

    cout<<endl;

     for(char x='a';x<='z';x++){
        cout<<x<<" : "<< int(x)<<endl;
    }

    cout<<endl;

     for(char x='0';x<='9';x++){
        cout<<x<<" : "<< int(x)<<endl;
    }

    return 0;
}

