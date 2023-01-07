#include<iostream>
#include<deque>
using namespace std;
int main(){
deque<int> d ;
d.push_back(1); // pushing element in fornt of the dequeue
d.push_front(2); // pushing the element in back of the queue
for(auto i : d){
    cout<< i << " ";
}cout<<endl; 


d.pop_back();// poping the element from back of the queue 
for(auto i : d){
    cout<< i << " ";
}cout<<endl; 

d.push_back(1); // pushing element in fornt of the dequeue
d.pop_front();// poping the element from back of the queue 
for(auto i : d){
    cout<< i << " ";
}cout<<endl; 

d.clear();// clearing the dequeue elements 

d.push_back(1); 
d.push_front(2); 
// getting the element form the specified index 
cout<<"element from index 0 are : "<< d.at(0)<<endl;

// getting the front and back elements of the dequeue 
cout << "Front Element IS : "<< d.front()<<endl;
//getting the element formn end of the index 
cout << "Back Element Is : "<< d.back()<<endl;

// dequeue Is Empty Or Not 
cout<< "Dequeus is empty : 0 = False , 1 = True : " << d.empty()<<endl;



// erasing the element form dequeue 
cout<< "before erase the queue "<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<< "after erasing the queue "<<d.size()<<endl;

}

/*

2 1 
2
1
element from index 0 are : 2
Front Element IS : 2
Back Element Is : 1
Dequeus is empty : 0 = False , 1 = True : 0
before erase the queue 2
after erasing the queue 1


*/