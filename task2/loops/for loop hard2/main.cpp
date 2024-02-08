#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,b,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>b;
        sum += pow(b,i);
    }
    cout<<sum;
    return 0;
}
