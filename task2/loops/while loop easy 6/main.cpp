#include <iostream>

using namespace std;

int main()
{
    int a;
    double b,sumodd=0,sumeven=0,odd=0,even=0;
    cin>>a;
    int i=1;
    while(i<=a)
    {
        cin>>b;
        if(i%2 == 0)
        {
            sumeven += b;
            even++;
        }
        else
        {
            sumodd +=b ;
            odd++;
        }
        i++;
    }
    cout<<"average of even position: "<<sumeven/even<<"\n";
     cout<<"average of odd position "<<sumodd/odd;

    return 0;
}
