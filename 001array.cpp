#include<iostream>
#include<array>
using namespace std;
int main(){
    // normal array
    int basic[3]= {1,2,3};
    // STL Array
    array<int ,4> a= {1,2,3,4};
    int size = a.size();
    for(int i =0 ; i<size ; i++){
        cout<<"Index at "<<i <<" Element Found  "<<a[i]<<endl; 
    } 
    // access element direct from the index 
    cout<<"Element at 2nd Index "<<a[2]<<endl;
    // access element dirrect by index IN STL
    cout<<"Element at 2nd Index "<<a.at(2)<<endl;
    //array is empty or not empty , if empty return 1 if not return 0
    cout<<"is array are empty "<<a.empty()<<endl;
    // getting the first element of the array 
    cout<<"Front Element : "<< a.front()<<endl;
    // getting the last element of the array 
    cout <<"Back Element : "<< a.back()<<endl;
}

/*
Index at 0 Element Found  1
Index at 1 Element Found  2
Index at 2 Element Found  3
Index at 3 Element Found  4
Element at 2nd Index 3
Element at 2nd Index 3
is array are empty 0
Front Element : 1
Back Element : 4
*/