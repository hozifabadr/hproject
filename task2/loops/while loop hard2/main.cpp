#include <iostream>

using namespace std;

int main()
{
    int n,b;
    cin>>n;
    b=n;
    while(n>0)
    {
        cout<<n%10;

        n=n/10;
    }
    cout<<"\n";

    return 0;
}
