#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a = {5,5,3,7};
     a.push_back(6);
    a.push_back(9);
    a.pop_back();
 for(int var : a){
    printf("%d \n",var);
    
 }


    // cout << a.size() << endl;
    // cout << a.capacity() << endl;

    return 0;
}