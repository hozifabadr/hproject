#include <iostream>

using namespace std;

int main()
{
    int n,sum;
    cout<<"enter a number: ";
    cin>>n;
    sum = n%10 + (n/10)%10 + (n/100)%10;
    cout<<sum;

    return 0;
}
