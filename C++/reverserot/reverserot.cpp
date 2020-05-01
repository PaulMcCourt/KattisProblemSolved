/*
Name-Paul McCourt
Date-5/13/19
Kattis-https://open.kattis.com/problems/reverserot
Difficulty-1.7
1)Get input
2)Split string into individual char
3)Locate char in cipher string
4)Take n and increment postiion in test string n times
5)Return char into output string
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
//Loops through all lines of input
void loop();
//Iterates through each char of string
void match(char& c);

int main(){
    string encoded="";
    loop();
    return 0;
}

void loop(){
    int rotations;
    string code;
    while(cin>>rotations&&cin>>code){
        reverse(code.begin(),code.end());
        for(int i=0;i<code.size();i++){
            for(int j=0;j<rotations;j++){
                match(code[i]);
            }
        }
        cout<<code<<endl;
    }
    
}

void match(char& c){
    c++;
    if(c=='Z'+1)
        {
            c='_';
        }
    else if(c=='_'+1)
        {
            c='.';
        }
    else if(c=='.'+1)
        {
            c='A';
        }       
} 
        
    
    
   
