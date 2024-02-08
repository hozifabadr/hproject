#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    if(n1%2 == 1 && n2%2 == 1)
      cout<<n1*n2;
    else if(n1%2 == 0 && n2%2 == 0)
        cout<<n1/n2;
    else if (n1%2 == 1 && n2%2 ==0)
        cout<<n1+n2;
    else if (n1%2 == 0 && n2%2 == 1)
        cout<<n1-n2;
    else
        cout<<"enter a number";

    return 0;
}
