#include <iostream>

using namespace std;

int main()
{
    int arr[200];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int min_result=INT_MAX;
    for(int i=0;i<n/2;i++)
    {

        for(int j=n;j>n/2;j--)
        {
           if(arr[i]+arr[j]+j-i<min_result)
           {
                min_result=arr[i]+arr[j]+j-i;
           }
        }
    }
    cout<<min_result;
    return 0;
}
