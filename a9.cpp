// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo.


#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:

    void sort012(int a[], int n){

        long long int count_0=0;
        long long int count_1=0;
        long long int count_2=0;

        for(long long int i=0;i<n;i++){

            if(a[i]==0){
                count_0++;
            }

            else if(a[i]==1){
                count_1++;
            }

            else{
                count_2++;
            }
        }

        for(int i=0;i<n;){

            for(int j=0;j<count_0;j++){
                a[i]=0;
                i++;
            }

            for(int j=0;j<count_1;j++){
                a[i]=1;
                i++;
            }

            for(int j=0;j<count_2;j++){
                a[i]=2;
                i++;
            }

        }

    }


// };

int main(){

    int arr[]={0, 2, 1, 2, 0};

    sort012(arr, 5);
    
    return 0;
}