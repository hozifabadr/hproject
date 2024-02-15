#include <iostream>

using namespace std;

int main()
{

    int arr2[501] {0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr2[x]++;

    }
    for(int i=0;i<501;i++)
    {
        while(arr2[i])
        {
            cout<<i<<" ";
            arr2[i]--;
        }
    }


    return 0;
}
