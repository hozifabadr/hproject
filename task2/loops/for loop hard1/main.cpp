#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==0)
        cout<<"must be odd";
    else
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                {
                    if(i==j)
                    cout<<"*";
                    else if (j==n-(i-1))
                    cout<<"*";
                    else
                        cout<<" ";
                }
                cout<<"\n";
        }
    }
    return 0;
}
