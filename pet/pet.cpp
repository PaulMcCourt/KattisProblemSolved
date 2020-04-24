/*
Name-Paul McCourt
5/16/19
Difficulty-1.3
https://open.kattis.com/problems/pet
Accepted 5/25/19
*/

#include <iostream>

using namespace std;

int main(){
    int contestants[5]={0,0,0,0,0}; //Declares 5 element array
    int score=0;
    for(int i=0;i<5;i++){ //Iterates through 5 rows
        for(int j=0;j<4;j++){ //Iterates through 4 elements per row
            int num; 
            cin>>num; //Reads each number
            score+=num; //Adds number into score
        }
        contestants[i]=score; //Puts the sum of each row into an array
        score=0; //Resets score to 0
    }
    int temp=0; //For storing winner score
    int num=0; //For storing number winner index
    for(int a=0;a<5;a++){ //To find the max value
        if(contestants[a]>temp){ 
            temp=contestants[a];
            num=a+1;
        }
    }
    cout<<num<<" "<<temp<<endl; //Kattis output
    return 0;
}