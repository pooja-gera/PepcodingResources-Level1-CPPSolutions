#include <iostream>
using namespace std;

int max(int arr[], int idx, int n){
    // write your code here
    if(n==0){
        return 0;
    }
    
    int smallMax = max(arr+1,idx,n-1);
    return max(arr[0],smallMax);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
