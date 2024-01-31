#include <iostream>

using namespace std;

int main()
{
    int n,y;
    double r;
    cout<<"enter number: ";
    cin>>n;
    //using %2
    bool d=(n%2==0);
    cout<<d<<"\n";
    //if d=true (1) number is even;
    //else it is odd;
    //using /2
    r = n/2;
    y=n/2;
    d = ((r-y) == 0);
    cout<<d<<"\n";
    //using %10
    int lastdigit;
    lastdigit=n%10;
    d = ( lastdigit == 0 || lastdigit==2 || lastdigit == 4 || lastdigit == 6 || lastdigit == 8);
    cout<<d;


    return 0;
}
