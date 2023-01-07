#include<iostream>
#include<map>
using namespace std;
// map will order thereself as order of available key 
int main(){
    map<int , string> m;
    // insertion 
    m[2] ="Ashish";
    m[15]="Anil";
    m[1]="waykar";

    for (auto i : m ){
        cout<< "Key : "<<i.first<<" value : "<< i.second<<" "<< endl;
    } cout<<endl;
    
    cout <<"Inserting the element with another way"<<endl ;
    //another way to insert the element in map
    m.insert({5," SGGS "});
    for(auto i : m ){
        cout<<"Key : "<<i.first<<" Value : "<<i.second<<endl;
    }
    cout<< "finding - 13 -> "<<m.count(-15)<<endl;
    cout<< "finding  13 -> "<<m.count(15)<<endl;

    // erasing the element (key , value by referance of key )
    m.erase(15);
    cout<<"after erase : "<<endl;
    for (auto i: m){
        cout<<" First ELement : "<<i.first<< " Second Element : "<<i.second<<endl;
    }
    auto it = m.find(5);
    for (auto i = it ;i!=m.end();it++){
        cout<<(*it).first<<endl;
    }


}