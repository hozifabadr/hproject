#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int res=INT_MIN;
    cin>>a>>b>>c;
    if(a>=100&&b>=100&&c>=100)
        cout<<-1;
    else
    {
        if(a<100 && a>res)
            res=a;
        if(b<100 && b>res)
            res=b;
        if(c<100 && c>res)
            res = c;
        cout<<res;

    }


}
