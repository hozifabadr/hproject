
#include <iostream>

using namespace std;

int main()
{
   int arr[900];

   int n;
   cin>>n;
   for(int i=0;i<n;i++)
       cin>>arr[i];
       cout<<arr[0]<<" ";
   for( int i=1;i<n;i++)
   {
       bool found =0;
        for( int j = 0;j<i;j++)
          found += (arr[i]==arr[j]);
       if(found == 0)
       {

           cout<<arr[i]<<" ";
       }

   }

}
