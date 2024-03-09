#include <iostream>

using namespace std;
int a(int arr[],int n,int cnt)
{
    if(cnt == 0)
        return 0;
    return arr[n-1] + a(arr,n-1,cnt-1);
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
