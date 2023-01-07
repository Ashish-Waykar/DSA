#include<iostream>
#include<vector>
using namespace std;

// vector will double its size when you reached the end element of the vector size

int main(){
    // initialisation
    vector<int> v;
    cout<<"Size Of vector --> "<<v.size()<<endl<<endl;

    cout<<"capacity of vector --> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity of vector --> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity of vector --> "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"capacity of vector --> "<<v.capacity()<<endl;
    v.push_back(7);
    cout<<"capacity of vector --> "<<v.capacity()<<endl;

    cout<<"Size Of vector --> "<<v.size()<<endl;

    // getting the element by Index of The vector 
    cout<<"Element At Second Index "<< v.at(2)<<endl;
    // gettig the front and back elements of the vector 
    cout <<"The Front Element : "<<v.front()<<endl; 
    cout <<"The Back Element : "<<v.back()<<endl; 
    //befor pop the vector 
    cout<<"Befor The POP Vector "<<endl;
    for(auto i : v){
        cout << i << " ";
    }cout<<endl;

    v.pop_back();// poping the element form back of the vector index 
    cout<<"After The POP Vector "<<endl;
    for(auto i : v){
        cout << i << " ";
    }cout<<endl;

    cout<<"Befor the clear size of vector : "<<v.size()<<endl;
    v.clear();
    cout<<"After The Clear Size Of Vector : "<<v.size()<<endl;


    // initialising the vector with size deffined 
    vector<int> a(5,1); // here the 5 is the size of the entire vector & 1 are the default element of the vector 
    // a =[1,1,1,1,1]
    for(auto i: a ){
        cout<< i<<" ";
    }cout<<endl;
    
    vector<int> last(a);// copieing the old vector and creating the new on with the help of that old one 
    // here the a is an referance vector for last named vector 
    for(auto i : last ){
        cout<< i << " ";
    }cout<<endl;

    last.push_back(3);
    for(auto i : last ){
        cout<< i << " ";
    }cout<<endl;
    



}


/*
Size Of vector --> 0

capacity of vector --> 0
capacity of vector --> 1
capacity of vector --> 2
capacity of vector --> 4
capacity of vector --> 4
Size Of vector --> 4
Element At Second Index 4
The Front Element : 2
The Back Element : 7
Befor The POP Vector
2 3 4 7
After The POP Vector
2 3 4
Befor the clear size of vector : 3
After The Clear Size Of Vector : 0
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1 3
*/