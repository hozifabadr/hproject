#include <iostream>

using namespace std;
void a(int arr[],int n)
{
    if(n == 0)
        return;
    a(arr,n-1);
    if(arr[n-2]>arr[n-1])
        arr[n-1] = arr[n-2];
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
        cin>>arr[i];
    a(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
