#include<iostream>
using namespace std;
// for more referance go to https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
void sort012(int arr[],int size){
    int lo= 0,hi=size-1,mid=0;
    while(mid<=hi){
        switch(arr[mid]){
            case 0:
                swap(arr[lo++],arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[hi--]);
                break;
        }
    }
}
int main(){
    int arr[18]={2,1,0,2,2,2,1,1,0,1,2,2,1,0,1,0,0,0};
    int size= sizeof(arr)/sizeof(arr[0]);
    sort012(arr,size);
    for(auto i: arr)cout<<i <<" ";
}
