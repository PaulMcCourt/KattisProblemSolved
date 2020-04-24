/*
Name-Paul McCourt
Date-5/31/19
Kattis-https://open.kattis.com/problems/aaah
Difficulty-1.5
Passed?-Yes
*/

#include <iostream>

using namespace std;

void ahh(){
    string jon; //Read in the two aaah's
    string doc;
    cin>>jon;
    cin>>doc;
    int ja=0;
    int da=0;
    
    for(int i=0;i<jon.size();i++){
        if(jon[i]=='a'){
            ja++;
        }
    }
    for(int j=0;j<doc.size();j++){
        if(doc[j]=='a'){
            da++;
        }
    }

    if(ja>=da){ //Check if john's aah is as long as the doctor's aah
        cout<<"go\n";
    }
    else
    {
        cout<<"no\n";
    }
    
}

int main(){
    ahh();
    return 0;
}