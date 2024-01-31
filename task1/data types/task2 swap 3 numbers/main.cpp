#include <iostream>

using namespace std;

int main()
{
   int n1,n2,n3,n4,n5;
   cout<<"enter three numbers: ";
   cin>>n1>>n2>>n3;
   n4=n1;
   n5=n2;
   n1=n2;
   n2=n3;
   n3=n4;
   cout<<n1<<" "<<n2<<" "<<n3;
    return 0;
}
