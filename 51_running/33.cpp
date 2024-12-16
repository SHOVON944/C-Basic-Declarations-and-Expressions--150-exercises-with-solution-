#include<iostream>
using namespace std;

int main()
{
    int a,highest;
    cout<<"ENter number";
    cin>>a;
    highest = a;
    for(int i=2; i<=5; i++){
        cout<<"Enter number";
        cin>>a;
    }
    for(int i=2 ;i<=5;i++){
    if(highest<a){
        highest = a;
    }
    }
    cout<<"The highest number is:"<<a;
    return 0;
}