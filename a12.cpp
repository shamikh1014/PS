// Write a program to cyclically rotate an array by one.



#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n){

    if(n==1){
        return;
    }

    for(int i=n-1;i>0;i--){

        int temp=arr[i];
        arr[i]=arr[i-1];
        arr[i-1]=temp;
    }

    return;

}

int main(){

    int arr[]={1, 2, 3, 4, 5};

    rotate(arr, 5);
    
    return 0;
}