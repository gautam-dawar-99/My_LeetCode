#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n,m,a;
    cin>>n>>m>>a;

    unsigned long long ans=ceil((double)m/a)*ceil((double)n/a);

    cout<<ans<<endl;

    return 0;
}