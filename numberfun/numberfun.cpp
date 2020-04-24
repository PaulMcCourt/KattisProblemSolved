/*
Name-Paul McCourt
Date-5/30/19
Kattis-https://open.kattis.com/problems/numberfun
Difficulty-1.4
1)Reads in n how many test cases to be read in
2)For each test case reads in the three numbers to be evaluated
3)Compares a and b with c to see if +-* or/ can be used to calculate c
*/

#include <iostream>

using namespace std;

void math(){
    int n=0;
    cin>>n; //reads in n input
    for(int i=0;i<n;i++){
        double a, b, c;
        cin>>a>>b>>c;
        double d1=a/b;
        double d2=b/a;
        if(a+b==c||a-b==c||b-a==c||a*b==c||d1==c||d2==c){
            cout<<"Possible"<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        }
        
    }
}
int main(){
    math();
    return 0;
}