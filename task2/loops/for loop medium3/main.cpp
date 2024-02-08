#include <iostream>

using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;
      if(n<1)
    cout<<"NO";
    else
    {
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            cnt++;
    }
    if(cnt == 1)
        cout<<"YES";
    else
        cout<<"NO";
    }
    return 0;
}
