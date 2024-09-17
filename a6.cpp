// Reverse the array.


#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str){

    string result="";
    for(int i=str.length()-1;i>=0;i--){
        result=result+str[i];
    }

    return result;
}

int main(){

    cout<<reverseWord("Geeks")<<endl;
    
    return 0;
}