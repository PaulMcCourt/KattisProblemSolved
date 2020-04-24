/*
Name-Paul McCourt
7/11/19
Kattis-https://open.kattis.com/problems/hissingmicrophone
Difficulty-1.3
Passed-Yes
 */

#include <iostream>
#include <string>

using namespace std;

void mic(){
    string word="";
    cin>>word;
    string result="";
    int count=0;
    for(int i=0;i<word.length();i++){
        
        if(word[i]=='s'&&word[i+1]=='s'){
            count++;
        }

        if(count>0){
            result="hiss";
        }
        else
        {
            result="no hiss";
        }
        
        
    }
    cout<<result<<endl;
    
}

int main(){
    mic();
    return 0;
}