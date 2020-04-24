/*
Name-Paul McCourt
7/18/19
Kattis-https://open.kattis.com/problems/recount
Difficulty-2.1
Borrowed
1)-https://stackoverflow.com/questions/32237946/how-to-count-duplicate-entries-of-a-vector-in-c
2)https://stackoverflow.com/questions/4263640/find-mapped-value-of-map
Definetly not the most simple way to solve the problem
 */

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void vote(){
    string vote="";
    vector<string> score; 
    //Reads in input until ***
    while(getline(cin,vote)&&vote!="***"){      
        score.push_back(vote);    
    }
    //Declares map to store vector with duplicates
    map <string, int> dup;
    //Adds vector into map <string, int> int keeps track of votes 1)
    for_each(score.begin(),score.end(),[&dup](string word){ dup[word]++;} ); 
    //Vector to count map int values
    vector<int> vec;
    //Push back map values into vector
    for(auto m: dup){
        vec.push_back(m.second);
    }
    //Sorts vector
    sort(vec.begin(),vec.end());
    //checks to see if there is a tie by comparing the last 2 values in sorted vector
    if(vec.end()[-2]==vec.end()[-1]){
        cout<<"Runoff!"<<endl;
    }
    
    else
    {   
        //Finds corresponding map value and prints associated string
        for(auto it=dup.begin();it!=dup.end();++it){ //3)
            if(it->second==vec.back()){
                cout<<it->first<<endl;
            }
        }
    }

}


int main(){
    vote();
    return 0;
}