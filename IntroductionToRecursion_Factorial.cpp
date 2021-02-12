#include<iostream>
using namespace std;

int factorial(int n){
    // write your code here
    if(n==0||n==1){
        return 1;
    } 
    int smallFactorial = factorial(n-1);
    return n*smallFactorial;
}


int main(){
    int n; cin>>n;
    cout<<factorial(n);
}
