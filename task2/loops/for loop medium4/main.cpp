#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
     if(n<1)
    cout<<"must be more than zero";
    else
   for(int i=1;i<=n;i++)
   {
       int cnt =0;
       for(int j=1;j<i;j++)
       {
           if(i%j==0)
            cnt++;


       }
        if(cnt==1)
            cout<<i<<" ";


   }

    return 0;
}
