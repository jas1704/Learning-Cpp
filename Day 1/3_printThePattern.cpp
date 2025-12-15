#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number of rows :- ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
        cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}