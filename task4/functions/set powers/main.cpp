#include <iostream>
#include<math.h>
using namespace std;
void setpowers(int arr[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        arr[i] = pow(m,i);
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,m;
    cin>>n;
    int arr[n] {0};
    cin>>m;
    setpowers(arr,n,m);



    return 0;
}
