#include <iostream>

using namespace std;

int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8;
    int sum_odd,sum_even;
  cout<<"enter 8 numbers:";
  cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8;
  sum_odd=n1+n3+n5+n7;
  sum_even=n2+n4+n6+n8;
  cout<<"sum of odd places: "<<sum_odd;
  cout<<endl;
  cout<<"sum of even places: "<<sum_even;


    return 0;
}
