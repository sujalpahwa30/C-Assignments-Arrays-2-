#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int even = 0;
    int odd = 0;
    for(int i = 0; i <= n-1; i++){
        if(i % 2 == 0) {
            even += arr[i];
        }
        else{
          odd += arr[i];
        }
    }
    cout << even - odd;
}