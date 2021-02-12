#include<iostream>
using namespace std;

void printIncDec(int n){
    // write your code here
    if(n==1){
        cout<<1<<endl<<1<<endl;
        return;
    }
    cout<<n<<endl;
    printIncDec(n-1);
    cout<<n<<endl;
    return;
}


int main(){
    int n; cin>>n;
    printIncDec(n);
}
