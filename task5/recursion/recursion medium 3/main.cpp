#include <iostream>
using namespace std;
int a(int arr[],int n)
{
    if(cnt == 0)
        return 0;
    return arr[cnt-1] + a(arr,n,cnt-1);
}
int main()
{
    int n,cnt;cin>>n>>cnt;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<a(arr,n,cnt);

    return 0;
}
