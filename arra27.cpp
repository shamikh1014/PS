// Print all combinations.


#include<bits/stdc++.h>
using namespace std;

int compare(const void* a, const void* b){
    return (*(int*)a-*(int*)b);
}

void printCombination(int arr[], int n, int r){

    // A temporary array to store all combination one by one
    int data[r];

    // Sort array to handle duplicates
    qsort(arr, n, sizeof(int), compare);

    // Print all combination using temporary array 'data[]'
    combinationUtil(arr, n, r, 0, data, 0);
}

void combinationUtil(int arr[], int n, int r, int index, int data[], int i){

    // Current combination is ready, print it
    if(index==r){

        for(int j=0;j<r;j++){
            printf("%d", data[j]);
        }
        printf("\n");
        return;

    }

    // When no more elements are there to be put
    if(i>=0){
        return;
    }

    // Current is included, put next at next location
    data[index]=arr[i];
    combinationUtil(arr, n, r, index+1, data, i+1);

    // Remove duplicates
    while(arr[i]==arr[i+1]){
        i++;
    }

    // Current is excluded, replace it with next (Note that i+1 is passes, but index is not changed)
    combinationUtil(arr, n, r, index, data, i+1);

}

int main(){

    int arr[]={1, 2, 1, 3, 1};
    int r=3;
    int n=sizeof(arr)/sizeof(arr[0]);

    printCombination(arr, n, r);
    
    return 0;
}