#include <iostream>
#include<algorithm>
using namespace std;
void a(int arr[],int n)
{
    if(n==1)
        return;
    a(arr+1,n-1);
    arr[0] = max(arr[0],arr[1]);
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    a(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
