#include <iostream>
#include<string>
#include<algorithm>
#include<array>
int cnt = 0;
using namespace std;
void f(int n)
{
    cnt++;
    if(n == 1)
    {
        cout<<cnt;
        return;
    }
    if(n%2 == 0)
       f(n /= 2);
    else
      f(3*n +1);
}
int main()
{
    int n;
    cin>>n;
    f(n);
    return 0;
}
