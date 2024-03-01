#include <iostream>
using namespace std;
bool prime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}
int nth(int n)
{
    int mx = INT_MAX,cnt=0;
    for(int i=2;i<mx;i++)
    {
       if(prime(i))
        cnt++;
       if(cnt == n)
           return i;
    }

}
int main()
{
    int n;
    cin>>n;
   cout<< nth(n);
    return 0;
}
