#include<iostream>
using namespace std;

void sort012(int arr[] , int n){
    int zero = 0, one = 0 , two = 0;
     for(int i=0;i<n;i++){
        if(arr[i] == 0)
           zero++;

           else if(arr[i]== 1)
               one++;
               else
                  two++;
     }
     int i=0;
    //  put zero
    while(zero--){
        arr[i] = 0;
        i++;
    }
    //  put one
    while(one--){
        arr[i] = 1;
        i++;
    }
    //  put zero
    while(two--){
        arr[i] = 2;
        i++;
    }
}

int main(){
    int arr[] = {1,2,2,1,0,1,0};
    int n = 7;
    sort012(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] <<  " "; 
    }cout << endl;
    return 0;
}