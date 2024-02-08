#include <iostream>

using namespace std;

int main()
{
    int tests,range,big,n;
    cout<<"enter number of tests: ";
    cin>>tests;
    int i=1;

    while(i<=tests)
    {
        cout<<"enter range: ";
        cin>>range;
        int j=1;
         big = INT_MAX;
        while(j<=range)
        {
            cin>>n;
            if(n<big)
            {
                big =n;
            }
            j++;

        }
         cout<<"minimum of "<<i<<" group : "<<big<<"\n";
        i++;

    }

    return 0;
}
