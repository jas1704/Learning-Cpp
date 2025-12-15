#include<bits/stdc++.h>
using namespace std;
// variables are also known as identifiers
int main(){
    int a;  //variable a 
    int b;  //variable b
    a=10;
    cout<<a<<endl;
    a=20;
    cout<<a<<endl;
    b=30;
    a=b;                 //assignment operator 30 assigned to a 
    cout<<a<<endl;         
    b=40;
    cout<<a<<' '<<b<<endl;   //Note 
    return 0;
}

//Naming Convections 
// 1. Should start with a "_" or a letter
// 2. Can only contain uppercase, lowercase, digits from 0 to 9 and underscore.
// 3. Must not be a keyword.