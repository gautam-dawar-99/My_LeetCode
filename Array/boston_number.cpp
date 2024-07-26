#include<iostream>
using namespace std;

int sum_of_digits(int n){
     int sum_of_digit = 0, rem;
    for (int num = n; num != 0; num /= 10) {
        rem = num % 10;
        sum_of_digit += rem;
    }
    return sum_of_digit;
}
int prime_factor_sum(int n){
    int prime_factor_sum = 0;
    int x = n;
    // Factor out all 2's from n
    while (x % 2 == 0) {
        prime_factor_sum += sum_of_digits(2);
        x /= 2;
    }

    int num = x;
    // Check for prime factors from 3 up to sqrt(n)
    for (x = 3; x * x <= num; x += 2) {
        while (num % x == 0) {
            prime_factor_sum += sum_of_digits(x);
            num /= x;
        }
    }

    // If n is prime and greater than 2
    if (num > 2) {
        prime_factor_sum += sum_of_digits(num);
    }
    return prime_factor_sum;

}
int main() {
    int n;
    cin >> n;

    int sum_of_digit=sum_of_digits(n);
    int prime_sum=prime_factor_sum(n);

    cout << sum_of_digit<<endl; 
	cout<<prime_sum<<endl; 

    if(sum_of_digit==prime_sum) cout<<"1";
    else cout<<"0";
    return 0;
}
