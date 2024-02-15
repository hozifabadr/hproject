#include <iostream>

using namespace std;

int main()
{
    int arr[500+270+1];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m=0,value = 0;
    for(int i =0; i<n;i++)
    {
        int cnt =0;
        for(int j =i+1;j<n;j++)
        {

            if(arr[i] == arr[j])
                cnt++;

        }
        if(cnt>m)
        {
            m=cnt;
            value = arr[i];
        }

    }
    cout<<value;
    return 0;
}
