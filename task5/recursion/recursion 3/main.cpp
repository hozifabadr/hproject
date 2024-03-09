#include <iostream>

using namespace std;
int mx(int arr[],int n)
{
    if(n == 1)
        return arr[0];
    else
        return max(mx(arr,n-1),arr[n-1]);


}
int main()
{
    int n;
    cin>>n;
      int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<mx(arr,n);

    return 0;
}
