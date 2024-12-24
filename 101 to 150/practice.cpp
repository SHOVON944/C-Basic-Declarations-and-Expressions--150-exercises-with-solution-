#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=2; i<=n; i++){
        if(i==2) cout<<2<<" ";
        for(int j=2; j<=i/2; j++){
            if(i%j!=0) cout<<i<<" ";
        }
    }
    return 0;
}