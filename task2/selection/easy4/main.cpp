#include <iostream>

using namespace std;

int main()
{
    int first,a,b,d,c,f,i=0,j=0;
    cin>>first>>a>>b>>c>>d>>f;
    if(a>=first)
        i++;
        else
            j++;
    if(b>=first)
        i++;
    if(c>=first)
        i++;
    if(d>=first)
        i++;
    if(f>=first)
        i++;
    cout<<i<<" numbers are more than or equal "<<first<<"\n";
      cout<<5-i<<" numbers are less than "<<first;

    return 0;
}
