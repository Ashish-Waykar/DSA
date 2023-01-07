#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s ;
    // set will get every element as an unique entry 
    // you cannot modify it 
    // slower then unorered set 
    // O (logn) is insertion compleity 
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(2);
    s.insert(4);
    s.insert(7);
    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;

    // removing the element from set we nee to itrate that by scoperesolution operator & iterator with position of starting point in set 
    set<int>:: iterator it = s.begin(); // starting element 
    it++; // increment the starting element 
    s.erase(it);// erast that index
    for (auto i : s){
        cout<<i <<" ";
    }cout<<endl;

    // find value is present or not 
    cout<<"5 is present in set or not "<< s.count(2)<<endl;
    // get the index of value 
    set<int>:: iterator itr = s.find(5);
    cout<<"value is present at iterator/index  "<< *it <<endl;

    // fetching the entire set 
    for (auto it = itr ;it!= s.end();it++){
        cout<<*it <<" ";
    }cout<<endl;

}