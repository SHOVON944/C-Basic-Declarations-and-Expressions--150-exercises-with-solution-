#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--) {
        int x;
        cin>>x;
        vector<int>a(x);
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
    unsigned long long count;
    if(count==a.size()){
      cout<<count<<endl;
    }
    }
    return 0;
}
