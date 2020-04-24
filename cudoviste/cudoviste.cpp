/*
Name-Paul McCourt
7/16/19
Kattis-https://open.kattis.com/problems/cudoviste
Difficulty-1.5
Borrowed heavily from MiniDomo
https://github.com/MiniDomo/Kattis/blob/master/C%2B%2B/cudoviste.cpp
I did this to learn more
 */

#include<iostream>
#include<string>
#include <vector>

using namespace std;


void compare(vector<vector<char> > plot,int r, int c){
    //Read into array
    for(int i=0;i<r;i++){ //Reads in characters into 2D vector
        for(int j=0;j<c;j++){
            cin>>plot[i][j];
        }
    }
    
    int count[]={0,0,0,0,0}; //Array to store # of cars crushed
    for(int i=0;i<r-1;i++){ //Counts rows
        for(int j=0;j<c-1;j++){ //Counts columns
            int num=0;
            char tl=plot[i][j], tr=plot[i][j+1];
            char bl=plot[i+1][j], br=plot[i+1][j+1];
            if(tl!='#'&&bl!='#'&&tr!='#'&&br!='#'){ //Make sure not to park on buildings/#
                if(tl=='X')
                    num++;
                if(tr=='X')
                    num++;
                if(bl=='X')
                    num++;
                if(br=='X')
                    num++;
                count[num]++;

            }
        }
    }
    //Print
    for(int a=0;a<5;a++){
        cout<<count[a]<<endl; //Prints array of answers
    }
    
}

int main(){
    int r=0;
    int c=0;
    cin>>r>>c;
    vector<vector<char> > plot(r, vector<char>(c)); //Creates 2D vector of vectors that is r wide and c tall
    compare(plot, r, c);
    return 0;
}