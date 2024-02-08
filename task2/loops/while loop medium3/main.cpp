#include <iostream>

using namespace std;

int main()
{
    int n;
    int i = 0 ,cnt = 0;
   cout<<"enter number between 1 to 30: ";
   cin>>n;
   while(true)
   {
       if(i%3 == 0 && i%4 != 0)
       {
           cout<<i<<" ";
           cnt++;
       }
       if(cnt==n)
       {
           break;
       }
       i++;
   }
    return 0;
}
