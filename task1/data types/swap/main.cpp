#include <iostream>

using namespace std;

int main()
{
    int n,n1,n2;
    cout<<"enter two numbers: ";
    cin>>n>>n1;
    cout<<"numbers before swapping is: "<<n<<"  "<<n1;
    n2=n;
    n=n1;
    n1=n2;
    cout<<endl;
    cout<<"numbers after swapping: "<<n<<"  "<<n1;



    return 0;
}
