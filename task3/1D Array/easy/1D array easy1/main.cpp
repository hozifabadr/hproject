#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
    int k=0;
      for(int i =0 ;i<n;i++)
        cin>>arr[i];
   for(int i =0 ;i<n;i++)
   {
       if(arr[i+1]>=arr[i])
       {
        k++;
       }
   }
   if(k==n-1)
    cout<<"YES";
   else
    cout<<"NO";
    return 0;
}
