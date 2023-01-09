#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// set dos not contain duplicateelement
//approach by set
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    vector<int> arr = {12, 3, 5, 7, 19 };
    int N = arr.size();
    int K = 4; // initialising the index of k 
 
    sort(arr.begin(),arr.end());// getting from algorithms lib
    for(auto i : arr)cout<<i<<" "<<endl;
    cout<<endl<<endl;
    cout<<" K th largest element are : "<<arr[K-1]<<endl;
    
    // std::nth_element() is an STL algorithm which rearranges the list in such a 
    //way such that the element at the nth position is the one which should be at that position if we sort the list.
    nth_element(arr.begin(), arr.begin()+K-1, arr.end(), greater());    // from algorithms lib

    //  Simple Function to Swap The Elements  
    int y= 5,z=9;
    swap(y,z);
    cout<<y <<" "<<z<<endl;

}
// approach by sorting array
// sort entire array & return the index of element o(nlogn)