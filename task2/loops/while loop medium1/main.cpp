#include <iostream>

using namespace std;

int main()
{
    int n ,i=1,a;
    cin>>n;
    a=n;
    while(i<=n)
    {

        int j=1;
        while(j<=(n-i))
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=(2*i -1))
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
    while(a>0)
    {
       int j=1;
       while(j<=(n-a))
       {
           cout<<" ";
           j++;
       }
       int k=1;
        while(k<=(2*a-1))
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
        a--;
    }
    return 0;
}
