#include <iostream>

using namespace std;

int main()
{
    int n=0;
    for(int a=1;a<=200;a++)
    {
         for(int b=1;b<=200;b++)
         {
              for(int c=1;c<=200;c++)
              {
                  int d = a+b-c;

                  if(d>=1 && d<=200 )
                    n++;



              }
         }
    }
    cout<<n;
    return 0;
}
