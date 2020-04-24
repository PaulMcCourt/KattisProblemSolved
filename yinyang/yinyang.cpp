/*
Name-Paul McCourt
Date-5/30/19
Kattis-https://open.kattis.com/problems/yinyangstones
Difficulty-1.8
1)Read in string
2)iterate through length of string for each char
3)if the char=='W' iterates to a local variable called white else iterates to variable black
4)At the end if the  variables equal each other than output 1 else 0
*/

#include <iostream>

using namespace std;

void input(){
    string input;
    cin>>input;
    int i,count=0;
    int white=0;
    int black=0;
    for(i=0; i<input.size();i++){
        if(input[i]=='W'){
            white++;
        }
        else{
            black++;
        }
        count++;
    }
    if(white==black){
        cout<<"1\n";
    }
    else{
        cout<<"0\n";
    }
    
}

int main(){
    input();
    return 0;
}