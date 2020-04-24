/*
Name-Paul McCourt
Date-7/18/19
Kattis-https://open.kattis.com/problems/heliocentric
Difficulty-1.8
Passed-Yes
 */

#include <iostream>
#include <string>

using namespace std;

void orbit(){
    int e,m;
    int cases=1; //Keeps track of # of cases for output
    while(cin>>e>>m){ //Reads in until otherwise told
        int days=0;
        while(e!=0||m!=0){ //Loops until both e and m=0
            if(e!=364){
                e++;
            }
            else  //Resets earth orbit new year
            {
                e=0;
            }
            if(m!=686){
                m++;
            }
            else  //Resets mars orbit new year
            {
                m=0;
            }
            days++;
        }
        cout<<"Case "<<cases<<": "<<days<<endl; //Prints
        cases++;
    }
}

int main(){
    orbit();
    return 0;
}