#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(4);
    l.push_back(8);
    for (auto i : l){
        cout <<i<<" ";
    }cout<<endl;

    // erase perticular element from the list 
    l.erase(l.begin()); // we can erase the begin or end 
    cout <<"After Erase"<<endl;
    for (auto i :l){
        cout<<i<<" ";
    }cout<<endl;

    cout <<"Size Of List are "<<l.size()<<endl;

    //initialise list with 5 indexes and default 100 as element at every position of index
    list<int> n(5,4);
    //n=[100,100,100,100,100]
    for(auto i : n){
        cout<<i<<" ";
    }cout<<endl;

}