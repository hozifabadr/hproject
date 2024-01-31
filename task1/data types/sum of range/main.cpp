#include <iostream>

using namespace std;

int main()
{
    int start,last;
       int sum_1_start,sum_end,range;
   cout<<"enter tow numbers start and end: ";
   cin>>start>>last;
  sum_end=last*(last+1)/2;
   cout<<"sum from 1 to the end = "<<sum_end;
   cout<<endl;
   sum_1_start=(start-1)*(start)/2;
   range=sum_end-sum_1_start;
   cout<<"sum of the range is = "<<range;





    return 0;
}
