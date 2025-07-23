#include<iostream>
#include<vector>
using namespace std;


int countPrimes(int n) {
        vector<bool> vec(n, true);
        int count = 0;

        for (int i = 2; i < n; i++) {
if(vec[i]){
                count++;
            }
            for (int j = i*2; j < n; j=i+j) {
                
                    vec[j]=false;
                
            }
        }

       

        return count;
    }



int main(){
cout<< countPrimes(500)<<endl;
    return 0;
}