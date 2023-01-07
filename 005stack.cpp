#include<iostream>
#include<stack>
using namespace std;
// stack = last in first out 
int main(){
    stack<string> s;
    s.push("ashish");
    s.push("anil");
    s.push("waykar");

    cout <<"Top Element  -> "<<s.top()<<endl;
    s.pop();
    cout <<"Top Element  -> "<<s.top()<<endl;
    cout<<"Size Of Stak -> "<<s.size()<<endl;
    cout<<"Empty Or Not -> "<<s.empty()<<endl;// 0 == false stack is not empty & 1 == true the stack is empty 

}