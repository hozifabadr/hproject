#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cout<<"enter two numbers: ";
    cin>>n1>>n2;
    if (n2==-1)
        cout<<n1*2+1;
    else if (n2==1)
        cout<<n1*n1;
    else
        cout<<"second value should be 1 or -1";
  return 0;
}
