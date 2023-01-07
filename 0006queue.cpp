#include<iostream>
#include<queue>
using namespace std;
// queue are first in first out type of Data structure 
int main(){
    queue<string> q;
    q.push("ashish");
    q.push("anil");
    q.push("Waykar");
    cout<<"First element : "<<q.front()<<endl;
    cout<<"Size before pop : "<<q.size()<<endl;

    q.pop();
    cout<<"first emlement : after pop "<<q.front()<<endl;
    cout<<"Size after pop"<<q.size()<<endl;
}