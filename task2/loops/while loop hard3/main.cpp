#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
   int n=1;
    while(n<=a)
    {
         int i=1;
        while(i<=b)
        {
        cout<<n<<" * "<<i<<" = "<<n*i<<"\n";
        i++;
        }
        n++;
    }

    return 0;
}
