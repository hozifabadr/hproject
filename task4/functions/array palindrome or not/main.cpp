#include <iostream>
#include<array>
using namespace std;
void pal(int arr[],int n)
{
    bool flag = true;
    for(int i=0;i<n/2;i++)
    {
        if(arr[i] != arr[n-i-1])
            flag = false;
    }
    if (flag)
        cout<<"Yes";
    else
        cout<<"No";

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    pal(arr,n);
    return 0;
}
