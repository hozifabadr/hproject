#include <iostream>
#include<algorithm>

using namespace std;
int mx3(int a,int b,int c)
{
    int maxx = a;
    if(b>a)
        maxx = b;
    if(c>a)
        maxx = c;
    return maxx;
}
int mx4(int a,int b,int c,int d)
{
    return max(mx3(a,b,c),d);
}
int mx5(int a,int b,int c, int d,int e)
{
    return max(mx4(a,b,c,d),e);
}
int mx6(int a,int b,int c,int d,int e,int f)
{
    return max(mx5(a,b,c,d,e),f);
}
int main()
{
    cout<<mx6(-3,-4,-5,-6,7,8)<<endl;
    return 0;
}
