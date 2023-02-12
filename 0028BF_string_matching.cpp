#include<iostream>
using namespace std;
int strStr(string a, string s) {
        
        //check for all edge cases
        if(s.size()>a.size())
            return -1;
        if(a.size()==0 && s.size()==0)
            return 0;
        if(a.size()==0)
            return -1;
        
        //apply brute force string matching algorithm
        for(int i=0,j=0;i<a.size()-s.size()+1;i++)
        {
            while(a[i+j]==s[j] && j<s.size())
            {
                j++;
            }
            if(j==s.size())
                return i;
            else
            {
                j=0;
            }
        }
        return -1;
    }

int main(){
    string a = "ashish anil waykar";
    string b = "anil";
        cout<<"sequence is found "<<strStr(a,b);
    return 0;
}
