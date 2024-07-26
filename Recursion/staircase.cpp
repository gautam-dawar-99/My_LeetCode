#include <iostream>
using namespace std;
int no_of_ways(int num){
    // if (num <= 1)
    //     return 1;
    if(num ==0){
        return 1;
    }
    if(num <0){
        return 0;
    }
    return no_of_ways(num - 1) + no_of_ways(num - 2)+ no_of_ways(num - 3);
}
int main() {
    int n=3;
    cout << "Number of ways to reach " << n << " steps: " << no_of_ways(n);
    return 0;
}