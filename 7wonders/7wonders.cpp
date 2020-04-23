/*
Name-Paul McCourt
Date-5/31/19
Kattis-https://open.kattis.com/problems/sevenwonders
Difficulty-1.3
Passed?-Yes
*/

#include <iostream>
#include <cmath>//for pow()
#include <algorithm>//for min()

using namespace std;


void game(){
    string cards="";
    cin>>cards;//Reads in the input string "CCC" or "TCGTTC"
    int T=0;
    int C=0;
    int G=0;
    for(int i=0;i<cards.size();i++){   //Counts number ot T/C/G
        if(cards[i]=='T'){
            T++;
        }
        else if(cards[i]=='C'){
            C++;
        }
        else
        {
            G++;
        }
    }
        
        int match=min(min(C,G),T); //Finds the number of matching triplets T,C,G's
        int TV=pow(T,2);
        int CV=pow(C,2);
        int GV=pow(G,2);
        int answer=TV+CV+GV+match*7; //Calculates the number of scientific points
        cout<<answer<<endl;
        
}


int main(){
    game();
    return 0;
}