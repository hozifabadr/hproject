#include <iostream>

using namespace std;

int main()
{
    int n,i=0;
    string s;
    cin>>n;

    while(i<n)
    {
        cin>>s;
        if(s == "NO" || s == "No" || s == "no" || s == "nO" || s=="ON" || s == "On" || s == "on" || s == "oN"  )
        {
            cout<<s;
        }
        i++;
    }



    return 0;
}


