#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter total marks: ";
    cin>>marks;
    if(marks>52)
    {
        cout<<"The student is pass";
    }
    else
    {
        cout<<"The student is fail";
    }
return 0;
}