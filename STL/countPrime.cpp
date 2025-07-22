#include<iostream>
using namespace std;

int countPrimes(int n) {
    int count = 0;

    for (int i = 2; i < n; i++) {
        bool isPrime = true;

        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;  // Exit inner loop if a divisor is found
            }
        }

        if (isPrime) {
            count++;  // Increment count if number is prime
        }
    }

    return count;
}


int main(){
    
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    cout<<countPrimes(n)<<endl;
    return 0;
}