#include<iostream>
using namespace std;
void insertionSort(int arr[] ,int n ){
    if (n<=1){
        return ;
    }
    insertionSort(arr , n-1);
    int last =arr[n-1];
    int j=n-2;

    while(j>=0&& arr[j]>last){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;
}
void printarraay(int arr[],int n ){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
int main(){
    int arr[]={12,11,23,232,451,12,21,1,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    printarraay(arr,n);
return 0;
}
