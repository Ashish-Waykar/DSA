//binary Search
#include<iostream>
using namespace std;

int main(){
    const int arr_len= 6;
    int arr[arr_len]={1,2,3,4,5,6};
    cout<<"Enter The Element to Find In Given Array " ;
    int target;cin>>target;

    int heigh= 6,low=0;
    for(int i =0; i< arr_len;i++){
        int mid= (low+heigh)/2;
        if(arr[mid]==target){
            cout<<endl<<"Target Element Is Available At Index "<<i<<endl;
            return 0;
        }else if(arr[mid]>target){
            heigh = mid-1;
        } else{
            low = mid+1;
        }
    }
    cout<<endl<<"Target Element Is Not Available "<<endl;
    return 0;
}