#include <iostream>

using namespace std;

int main()
{
    int a;
    int arr[200];
    int arr2[200];
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    int b;
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>arr2[i];
    }
    for(int i=0;i<b;i++)
    {
         int pos =-1;
         int value = 0;
        for(int j=0;j<a;j++)
        {

            if( arr[j]==arr2[i])
            {
                value = arr2[i];
                pos=j;
            }
            else
            {

                value = arr2[i];
                 continue;
            }

        }
            cout<<value<<" has position "<<pos;
        cout<<endl;
    }
    return 0;
}
