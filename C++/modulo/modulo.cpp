/*
Name-Paul McCourt
Date-6/4/19
Kattis-https://open.kattis.com/problems/modulo
Difficulty-1.6
*/

#include <iostream>
#include <set>

using namespace std;

void input(){
    set <int> unique; //Used set because it automatically gets rid of the nonunique values
    int num=0;
    for(int i=0;i<10;i++){
        cin>>num;
        int mod=0;
        mod=num%42;
        unique.insert(mod);
    }
    cout<<unique.size()<<endl;
}

int main(){
    input();
    return 0;
}