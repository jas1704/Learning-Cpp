#include<bits/stdc++.h>
using namespace std;

int main(){
    int maths, english, science, average;
    cout<<"Enter Maths Number :- ";
    cin>>maths;
    cout<<"Enter English Number :- ";
    cin>>english;
    cout<<"Enter Science Number :- ";
    cin>>science;
    average = (maths + english + science)/3;    // when you divide int by int then the ans is also int
    cout<<"Average of Maths, English, Science is : "<<average<<endl;
    return 0;
}

/*
for precision use 

int main(){
    float maths, english, science, average;
    cout<<"Enter Maths Number :- ";
    cin>>maths;
    cout<<"Enter English Number :- ";
    cin>>english;
    cout<<"Enter Science Number :- ";
    cin>>science;
    average = (maths + english + science)/3;    
    cout<<"Average of Maths, English, Science is : "<<average<<endl;
    return 0;
}
*/