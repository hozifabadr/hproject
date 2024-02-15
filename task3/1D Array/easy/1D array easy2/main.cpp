#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[200];
    int maximum = -1;
    int mininum = 2000;
    cout<<" enter values between 0 and 2000:\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>=maximum)
            maximum = arr[i];
        if(arr[i]<=mininum)
            mininum = arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] == maximum)
            arr[i]=mininum;
        else if(arr[i] == mininum )
            arr[i]=maximum;
        cout<<arr[i]<<" ";

    }
    return 0;
}
