#include <iostream>

using namespace std;

int main()
{
    int n,m,w;
    cin>>n>>m>>w,cnt=0;
    for(int a=1;a<=n;a++)
    {

        for(int b=a;b<=m;b++)
        {
            int c = a+b;
            if(c>=1 && c<=w)
                cnt+=2;
        }

    }

    return 0;
}
