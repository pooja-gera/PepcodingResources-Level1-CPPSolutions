#include <iostream>
using namespace std;

void display(int arr[], int idx, int n){
    // write your code here
    if(n-1-idx==-1){
        return;
    }
    
    cout<<arr[n-1-idx]<<endl;
    display(arr,idx+1,n);
    return;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    display(arr, 0, n);
}
