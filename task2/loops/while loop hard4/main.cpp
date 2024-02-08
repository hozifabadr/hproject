#include <iostream>
#include<math.h>

using namespace std;

int main()
{
   int tests,n,a;
   cin>>tests;
   while(tests>0)
   {
       cin>>n;
       int sum=0;
       int i=1;
       while(i<=n)
       {
           cin>>a;
           sum += pow(a,i);
           i++;

       }
       cout<<sum<<"\n";
       tests--;
   }

    return 0;
}
