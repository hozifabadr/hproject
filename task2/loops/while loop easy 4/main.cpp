#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    i=n;
    while(i>0)
    {
        int j=0;
        while(j<i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}
