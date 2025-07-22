#include<iostream>
using namespace std;

string isprime(int m){

    for(int i=2; i*i<=m; i++){
         if(m%i== 0){
            return "notprime";
            // break;
         }
    }

    return "primeNumber";
    
}

int main(){
    
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    cout<<isprime(n)<<endl;
    return 0;
}