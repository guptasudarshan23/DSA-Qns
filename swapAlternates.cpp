#include<iostream>
using namespace std;

int swapAlternates(int arr[] , int n){
    for(int i=0;i<n;i+=2){
        swap(arr[i],arr[i+1]);
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    swapAlternates(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
}