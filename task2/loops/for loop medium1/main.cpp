#include <iostream>

using namespace std;

int main()
{
    int n=0;
   for(int i=50;i<=300;i++)
   {
       for(int j=70;j<=400;j++)
       {
           if(i<j && (i+j)%7==0)
            n++;

       }
   }
   cout<<n;
    return 0;
}
