#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int arr[10] {0};
    for(int i=0;i<n;i++)
    {
       cin>>x;
       if(x == 0)
        arr[0]++;
       else
        {
            while(x)
            {
                int d = x%10;
                arr[d]++;
                x/=10;
            }
        }
    }
    for(int i=0;i<10;i++)
        {
            cout<<i<<" "<<arr[i]<<"\n";
        }

    return 0;
}
