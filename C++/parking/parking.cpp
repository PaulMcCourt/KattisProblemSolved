/*
Name-Paul McCourt
5/29/19
Kattis Parking-https://open.kattis.com/problems/parking2
Difficulty-1.5
Algorithm steps-
1)Read in n which is # of test cases
2)Read in num which is number of stores
3)Read in each store number and push into a vector
4)Sort vector in ascending order using sort from algorithm library
5)Store first and last element into max and min variables
6)Find the difference between max and min and cout
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void input(){
    int n=0;
    cin>>n; //Reads in t
    while(n!=0){
        vector<int> stores;
        int num=0;
        cin>>num;
        for(int i=0;i<num;i++){
            int s;
            cin>>s;
            stores.push_back(s);
        }
        sort(stores.begin(),stores.end()); //From algorithm library
        int min=stores.front();
        int max=stores.back();
        int diff=max-min;
        cout<<diff*2<<endl;
        n--;
    }
}

int main(){
    input();
    return 0;
}