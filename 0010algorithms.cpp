#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    // finding the 6 if available print 1 if not anvailable pring 0
    cout<<"finding 6 -> "<< binary_search(v.begin(),v.end(), 6)<<endl;
    cout<<"lower bond -> "<<lower_bound(v.begin(),v.end(),2)-v.begin()<<endl;//1 
    cout<<"upper bond -> "<<upper_bound(v.begin(),v.end(),2)-v.begin()<<endl;//2

}
