#include <iostream>

using namespace std;

int main()
{
    int n,s,b,sum=0;
    cin>>n>>s>>b;
    for(int i=1;i<=n;i++)
    {
        int sumd=0;
        for(int j=i;j>0;j/10)
        {
            sumd += j%10;
        }
          if(sumd>=s && sumd<=b)
                sum += i;
    }
    cout<<sum;

    return 0;
}
