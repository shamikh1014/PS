// Find the maximum and minimum element in an array.


#include<bits/stdc++.h>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n){

    long long min_ele=INT_MAX;
    long long max_ele=INT_MIN;

    int i=0;
    int j=n-1;

    while(i<=j){

        if(a[i]<min_ele){
            min_ele=a[i];
        }

        if(a[i]>max_ele){
            min_ele=a[j];
        }

        if(a[j]<min_ele){
            min_ele=a[j];
        }

        if(a[j]>max_ele){
            max_ele=a[j];
        }

        i++;
        j--;

    }

    pair<long long, long long> p;
    p.first=min_ele;
    p.second=max_ele;

    return p;
}

int main(){

    long long int arr[]={3, 2, 1, 56, 10000, 167};

    getMinMax(arr, 6);
    
    return 0;
}