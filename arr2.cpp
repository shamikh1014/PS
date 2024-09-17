// Reverse the array.


#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str){

    int i=0, j=str.size()-1;

    while(i<j){
        swap(str[i], str[j]);
        i++;
        j--;
    }

    return str;
}

int main(){

    cout<<reverseWord("Geeks")<<endl;
    
    return 0;
}