/*
Name-Paul McCourt
Date-7/19/19
Kattis-https://open.kattis.com/problems/judgingmoose
Difficulty-1.4
Passed-Yes
 */

#include <iostream>
#include <string>

using namespace std;

void tines(){
    int r=0,l=0;
    cin>>r>>l;
    if(l==0&&r==0)
    {
        cout<<"Not a moose"<<endl;
    }
    else if(r<l){
        cout<<"Odd "<<l*2<<endl;
    }
    else if(r>l){
        cout<<"Odd "<<r*2<<endl;
    }
    else if(l==r){
        cout<<"Even "<<l*2<<endl;
    }
  
    
}

int main(){
    tines();
    return 0;
}