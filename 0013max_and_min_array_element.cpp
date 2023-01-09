#include<iostream>
using namespace std;
int getmax(int arr[],int end,int start){
    int max=0;
    while(start<end){
        int x = arr[start];
        if(x>max){
            max=x;
        }  
        start++;
    }
    return max;
}
int getmin(int arr[], int end, int start){
    int min=arr[0];
    while(start<end){
        int x =arr[start];
        if(x<min){
            min=x;
        }
        start++;
    }
    return min;
}
int main(){
    int arr[6]={1,2,8,3,0,4};
    int length=sizeof(arr)/sizeof(int);
    // my own coded approach 
    cout<<getmax(arr,length,0)<<endl;
    cout<<getmin(arr,length,0);
    //  prebuild approach
    // create sorting function & get the last element & first element of array
    // that will save your memory & time complexity too
    // you dont need to iterate array twice
    

}