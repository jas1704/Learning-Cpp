#include<bits/stdc++.h>
using namespace std;

int main(){
    float pencil, pen, eraser, total;
    cout<<"Enter Pencil Cost :- ";
    cin>>pencil;
    cout<<"Enter Pen Cost :- ";
    cin>>pen;
    cout<<"Enter Eraser Cost :- ";
    cin>>eraser;
    total = pencil + pen + eraser; 
    float bill=total+((18*total)/100);   
    cout<<"Total cost after 18 % GST of Pencil, Pen and Eraser is : "<<bill<<endl;
    return 0;
}
