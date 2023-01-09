#include<iostream>
using namespace std;
void reverse(int arr[], int start,int end){
    while(start<end){
        int temp= arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start ++;
        end--;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr);
    cout<<endl<<"Size Of Array -> "<<size<<endl<<endl;
    int getArrayLength = sizeof(arr) / sizeof(int);
    cout<<"Non Reversed Array Is : "<<endl;
    //array in serial manner 
    for(int i=0;i<getArrayLength;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //another apporach to get all array elements 
    for (int i : arr) {
    cout << i << " ";
    }cout<<endl<<endl;
    cout<<"Reversed Array Is : "<<endl;
    // array in reverse manner
    reverse(arr,0,getArrayLength-1);
    //one line apporach to get all array elements 
    for (int i : arr) cout << i << " ";
    cout<<endl<<endl;
    

}